#include "Arduino.h"

void setup(){
  Serial.begin(115200);
  while(!Serial){
    ; // wait for serial port to connect
  }
}

void loop(){
  Serial.println("hello");
  delay(1000);
}
