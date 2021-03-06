//----------------------------------------------------------------------------
//  Demo Application for MSP430/CC1100-2500 Interface Code Library v1.0
//
//  K. Quiring
//  Texas Instruments, Inc.
//  July 2006
//  IAR Embedded Workbench v3.41
//----------------------------------------------------------------------------



#include "include.h"

extern char paTable[];
extern char paTableLen;

char txBuffer[4];
char rxBuffer[4];
unsigned int i;

void main (void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT

  TI_CC_SPISetup();                         // Initialize SPI port

  TI_CC_PowerupResetCCxxxx();               // Reset CCxxxx
  writeRFSettings();                        // Write RF settings to config reg
  TI_CC_SPIWriteBurstReg(TI_CCxxx0_PATABLE, paTable, paTableLen);//Write PATABLE

  // Configure ports -- switch inputs, LEDs, GDO0 to RX packet info from CCxxxx
  TI_CC_SW_PxREN = TI_CC_SW1;
  TI_CC_SW_PxIES = TI_CC_SW1;					//Int on falling edge
  TI_CC_SW_PxIFG &= ~(TI_CC_SW1);				//Clr flags
  TI_CC_SW_PxIE = TI_CC_SW1;					//Activate enables
  
  TI_CC_LED_PxDIR = TI_CC_LED1 + TI_CC_LED2; //Outputs
  
  TI_CC_GDO0_PxREN = TI_CC_GDO0_PIN;
  TI_CC_GDO0_PxIES |= TI_CC_GDO0_PIN;       // Int on falling edge (end of pkt)
  TI_CC_GDO0_PxIFG &= ~TI_CC_GDO0_PIN;      // Clear flag
  TI_CC_GDO0_PxIE |= TI_CC_GDO0_PIN;        // Enable int on end of packet

  TI_CC_SPIStrobe(TI_CCxxx0_SRX);           // Initialize CCxxxx in RX mode.
                                            // When a pkt is received, it will
                                            // signal on GDO0 and wake CPU

	TACTL = TASSEL_2 + MC_2 + TAIE; 		  // SMCLK, contmode, interrupt

  _BIS_SR(LPM1_bits + GIE);                 // Enter LPM3, enable interrupts
}


// The ISR assumes the interrupt came from a press of one of the four buttons
// and therefore does not check the other four inputs.
#pragma vector=PORT1_VECTOR
__interrupt void port1_ISR (void)
{
  // Build packet
  txBuffer[0] = 2;                           // Packet length
  txBuffer[1] = 0x02;                        // Packet address
  txBuffer[2] = 0x01;//(~TI_CC_SW_PxIN >> 4) & 0x0F;// Load four switch inputs

  RFSendPacket(txBuffer, 3);                 // Send value over RF
  TI_CC_LED_PxOUT ^= TI_CC_LED2;

  P1IFG &= ~(TI_CC_SW1);//Clr flag that caused int
  P2IFG &= ~TI_CC_GDO0_PIN;                  // After pkt TX, this flag is set.
}                                            // Clear it.


// The ISR assumes the int came from the pin attached to GDO0 and therefore
// does not check the other seven inputs.  Interprets this as a signal from
// CCxxxx indicating packet received.
#pragma vector=PORT2_VECTOR
__interrupt void port2_ISR (void)
{
  char len=2;                               // Len of pkt to be RXed (only addr
                                            // plus data; size byte not incl b/c
                                            // stripped away within RX function)
  if (RFReceivePacket(rxBuffer,&len))       // Fetch packet from CCxxxx
    TI_CC_LED_PxOUT ^= TI_CC_LED2;//rxBuffer[1];         // Toggle LEDs according to pkt data

  P2IFG &= ~TI_CC_GDO0_PIN;                 // Clear flag
}

// Timer_A3 Interrupt Vector (TAIV) handler
#pragma vector=TIMERA1_VECTOR
__interrupt void Timer_A(void)
{
  switch  (TAIV)       // Efficient switch-implementation
  {
    case  2: break;                         // TACCR1 not used
    case  4: break;                         // TACCR2 not used
    case 10: TI_CC_LED_PxOUT ^= TI_CC_LED1;                 // overflow
             break;
  }
}

