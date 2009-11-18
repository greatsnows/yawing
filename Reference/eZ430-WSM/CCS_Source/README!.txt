Steps to successfully build the CCS project: 

1) The workspace should be opened in the following directory: 

~/CCE_Source/Projects/Examples/peer_applications/eZ430RF

2) Once created, the eZ430-RF2500_WSM project should be imported into the workspace:
    a. Select "Project > Import Existing CCS/CCE Eclipse Project" 
    b. Navigate to your workspace and click OK
    c. Make sure the eZ430-RF2500_WSM project is selected and click Finish

3) Ignore the "C/C++ indexin" error

4) Select "Window > Preferences... > General > Workspace > Linked Resources > New..." to create a new path variable 
    a. Name the variable: eZ430_WSM_ROOT 
    b. Click on Folder and select the following directory: 
    
    ~\eZ430-RF2500 Wireless Sensor Monitor\CCS_Source

5) Build and download the new project