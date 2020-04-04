#include<SoftwareSerial.h>

//Create object named bt of the class SoftwareSerial 
SoftwareSerial bt(0,1);     // (Rx,Tx) pins defined  

void setup() {
  bt.begin(9600);    // Define baud rate for software serial communication 
  Serial.begin(9600);     // Define baud rate for serial communication 

}




void loop() {
  //char input[10]; 
 
  String input;
   
       
      input=bt.readString();
   // input.trim();
   // use input.trim() in case you wish to operate the bluetooth via phone for user based control. It removes redundant spaces
    Serial.println(input);       //Print character received on to the serial monitor
    
}
