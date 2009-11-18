
msp430x22x4_1.asm               Software Toggle P1.0
msp430x22x4_1_vlo.asm           Software Toggle P1.0, MCLK = VLO/8
msp430x22x4_lpm3.asm            Basic Clock, LPM3 Using WDT ISR, 32kHz ACLK
msp430x22x4_lpm3_vlo.asm        Basic Clock, LPM3 Using WDT ISR, VLO ACLK
msp430x22x4_p1_02.asm           Software Port Interrupt Service on P1.2 from LPM4
msp430x22x4_p1_04.asm           P1.2 Interrupt from LPM4 with Internal Pull-up Resistor
msp430x22x4_oa_01.asm           OA0, Comparator Mode
msp430x22x4_oa_02.asm           OA0, General-Purpose Mode
msp430x22x4_oa_03.asm           OA0, Inverting PGA Mode
msp430x22x4_oa_04.asm           OA0, Non-Inverting PGA Mode
msp430x22x4_oa_05.asm           OA0, Unity-Gain Buffer Mode
msp430x22x4_adc10_01.asm        ADC10, Sample A0, AVcc Ref, Set P1.0 if A0 > 0.5*AVcc
msp430x22x4_adc10_02.asm        ADC10, Sample A0, 1.5V Ref, Set P1.0 if A0 > 0.2V
msp430x22x4_adc10_03.asm        ADC10, Sample A10 Temp, Set P1.0 if Temp ++ ~2C
msp430x22x4_adc10_04.asm        ADC10, Sample A0, Signed, Set P1.0 if A0 > 0.5*AVcc
msp430x22x4_adc10_05.asm        ADC10, Sample A11, Lo_Batt, Set P1.0 if AVcc < 2.3V
msp430x22x4_adc10_06.asm        ADC10, Output Internal Vref on P2.4 & ADCCLK on P1.0
msp430x22x4_adc10_07.asm        ADC10, DTC Sample A0 64x, AVcc, Repeat Single, DCO
msp430x22x4_adc10_08.asm        ADC10, DTC Sample A0 64x, 1.5V, Repeat Single, DCO
msp430x22x4_adc10_10.asm        ADC10, DTC Sample A2-0, AVcc, Single Sequence, DCO
msp430x22x4_adc10_13.asm        ADC10, DTC Sample A1 32x, AVcc, TA0 Trig, DCO
msp430x22x4_adc10_14.asm        ADC10, DTC Sample A1-0 32x, AVcc, Repeat Seq, DCO
msp430x22x4_adc10_15.asm        ADC10, DTC Sample A10 32x to Flash, Int Ref, DCO
msp430x22x4_adc10_19.asm        ADC10, DTC Sample A0 64x, AVcc, HF XTAL
msp430x22x4_adc10_20.asm        ADC10, DTC Sample A0 2-Blk Cont. Mode, AVcc, HF XTAL
msp430x22x4_flashwrite_01.asm   Flash In-System Programming, Copy SegC to SegD
msp430x22x4_flashwrite_04.asm   Flash In-System Programming w/ EEI, Copy SegD to A/B/C
msp430x22x4_clks.asm            Basic Clock, Output Buffered SMCLK, ACLK and MCLK/10
msp430x22x4_fll_01.asm          Basic Clock, Implement Auto RSEL SW FLL
msp430x22x4_fll_02.asm          Basic Clock, Implement Cont. SW FLL with Auto RSEL
msp430x22x4_hfxtal.asm          Basic Clock, MCLK Sourced from HF XTAL
msp430x22x4_rosc.asm            DCOCLK Biased with External Resistor Rosc
msp430x22x4_dco_flashcal.asm    DCO Calibration Constants Programmer
msp430x22x4_ta_01.asm           Timer_A, Toggle P1.0, TACCR0 Cont. Mode ISR, DCO SMCLK
msp430x22x4_ta_02.asm           Timer_A, Toggle P1.0, TACCR0 Up Mode ISR, DCO SMCLK
msp430x22x4_ta_03.asm           Timer_A, Toggle P1.0, Overflow ISR, DCO SMCLK
msp430x22x4_ta_04.asm           Timer_A, Toggle P1.0, Overflow ISR, 32kHz ACLK
msp430x22x4_ta_05.asm           Timer_A, Toggle P1.0, TACCR0 Up Mode ISR, 32kHz ACLK
msp430x22x4_ta_06.asm           Timer_A, Toggle P1.0, TACCR1 Cont. Mode ISR, DCO SMCLK
msp430x22x4_ta_16.asm           Timer_A, PWM TA1-2, Up Mode, DCO SMCLK
msp430x22x4_ta_17.asm           Timer_A, PWM TA1-2, Up Mode, 32kHz ACLK
msp430x22x4_tb_01.asm           Timer_B, Toggle P1.0, TBCCR0 Cont. Mode ISR, DCO SMCLK
msp430x22x4_tb_04.asm           Timer_B, Toggle P1.0, Overflow ISR, 32kHz ACLK
msp430x22x4_tb_05.asm           Timer_B, Toggle P1.0, TBCCR0 Up Mode ISR, 32kHz ACLK
msp430x22x4_tb_06.asm           Timer_B, Toggle P1.0, TBCCR1 Cont. Mode ISR, DCO SMCLK
msp430x22x4_tb_09.asm           Timer_B, Toggle P4.0-2, Cont. Mode ISR, HF XTAL ACLK
msp430x22x4_tb_11.asm           Timer_B, PWM TB1-2, Up Mode, 32kHz ACLK
msp430x22x4_wdt_01.asm          WDT, Toggle P1.0, Interval Overflow ISR, DCO SMCLK
msp430x22x4_wdt_02.asm          WDT, Toggle P1.0, Interval Overflow ISR, 32kHz ACLK
msp430x22x4_wdt_04.asm          WDT+ Failsafe Clock, DCO SMCLK
msp430x22x4_wdt_05.asm          Reset on Invalid Address fetch, Toggle P1.0
msp430x22x4_wdt_06.asm          WDT+ Failsafe Clock, 32kHz ACLK
msp430x22x4_uscia0_uart_01_115k.asm             USCI_A0, 115200 UART Echo ISR, DCO SMCLK
msp430x22x4_uscia0_uart_01_115k_lpm.asm         USCI_A0, 115200 UART Echo ISR, DCO SMCLK, LPM4
msp430x22x4_uscia0_uart_01_9600.asm             USCI_A0, 9600 UART Echo ISR, DCO SMCLK
msp430x22x4_uscia0_uart_05_9600.asm             USCI_A0, Ultra-Low Pwr UART 9600 Echo ISR, 32kHz ACLK
msp430x22x4_uscia0_uart_08_9600.asm             USCI_A0, UART 9600 Full-Duplex Transceiver, 32kHz ACLK
msp430x22x4_uscia0_spi_09.asm   USCI_A0, SPI 3-Wire Master Incremented Data
msp430x22x4_uscia0_spi_10.asm   USCI_A0, SPI 3-Wire Slave Data Echo
msp430x22x4_uscia0_irda_01.asm  USCI_A0 IrDA External Loopback Test, 8MHz SMCLK
msp430x22x4_uscia0_irda_02.asm  USCI_A0 IrDA Monitor, 8MHz SMCLK
msp430x22x4_uscib0_i2c_08.asm   USCI_B0 I2C Master TX multiple bytes to MSP430 Slave
msp430x22x4_uscib0_i2c_09.asm   USCI_B0 I2C Slave RX multiple bytes from MSP430 Master
msp430x22x4_uscib0_i2c_10.asm   USCI_B0 I2C Master RX multiple bytes from MSP430 Slave
msp430x22x4_uscib0_i2c_11.asm   USCI_B0 I2C Slave TX multiple bytes to MSP430 Master
