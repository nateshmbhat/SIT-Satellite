#include<EEPROM.h>


//start reading from the first byte (address 0 ) of the EEPROM
  int launch_flag_address= 0; // This is the address of our launch flag variable 
  byte value ;
  int launch_flag ;      // This is the launch flag variable data
  
  
void setup() {
  Serial.begin(9600);
  while(!Serial){
  delay(250);
  }
  
  
}

void loop() {

  launch_flag = EEPROM.read(launch_flag_address);
  Serial.print("launch_flag : ");
  Serial.println(launch_flag,DEC);
  delay(1000);
}
