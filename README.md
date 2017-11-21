# Tank Drive Example
This code demonstrates a simple tank drive program with WPILib for the FIRST Robotics Competition.

## Deploying to the RoboRIO
To the deploy to the roboRIO, first connect to the router on the robot. Then, in Eclipse, right click on this project in the Project Explorer and open the 'Run As' menu. Click on the 'WPILib C++ Deploy' Option. The status of the deployment will display in Eclipse's Console.

By default, the deploy script looks for the IP address 10.TE.AM.2 (for us this is 10.4.22.2). After re-imaging, the roboRIO on the practice drive base has an IP address of 10.4.22.42. Follow these instructions to have the deploy script check for the correct IP address.

### Windows
Open the file C:\Windows\System32\drivers\etc\hosts. At the end of this file, add the line

`10.4.22.42		roboRIO-422-FRC.local`
