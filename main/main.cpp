#include "Arduino.h"
#include "M5Core2.h"

void setup(){
  disableCore0WDT();
  disableCore1WDT();

  M5.begin();
  M5.Lcd.setTextColor(YELLOW);  
  M5.Lcd.setTextSize(2); 
  M5.Lcd.setCursor(65, 10);  
  M5.Lcd.println("Button example");
  M5.Lcd.setCursor(3, 35);
  M5.Lcd.println("Press button B for 700ms");
  M5.Lcd.println("to clear screen.");
  M5.Lcd.setTextColor(RED);
}

void loop(){
  M5.update();
  if (M5.BtnA.wasReleased() || M5.BtnA.pressedFor(1000, 200)) {
    M5.Lcd.print('A');
  } else if (M5.BtnB.wasReleased() || M5.BtnB.pressedFor(1000, 200)) {
    M5.Lcd.print('B');
  } else if (M5.BtnC.wasReleased() || M5.BtnC.pressedFor(1000, 200)) {
    M5.Lcd.print('C');
  } else if (M5.BtnB.wasReleasefor(700)) {
    M5.Lcd.clear(WHITE);  
    M5.Lcd.setCursor(0, 0);
  }
}

