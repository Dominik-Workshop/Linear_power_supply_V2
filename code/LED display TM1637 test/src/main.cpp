#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 2
#define DIO 3


int main(){
  init();

  TM1637Display display(CLK, DIO);
  
  display.setBrightness(7);
  display.showNumberDec(2137);
  delay(3000);  

  while(1){
    display.showNumberDec(analogRead(A0));
    delay(3000);  
    display.showNumberDec(8888);
    delay(3000);  
  }
}
