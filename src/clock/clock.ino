#include "ChessClock.h"

const byte CLOCK_ONE_BUT_PIN = 2;
const byte CLOCK_TWO_BUT_PIN = 3;

int maxMiniute = 99; 
int maxSecond = 59; 

int clockOneMinute = 99;
int clockTwoMinute = 99;

int clockOneSecond = 59;
int clockTwoSecond = 59;

ChessClock chessClock (clockOneMinute, clockOneSecond, clockTwoMinute, clockTwoSecond);

// run setup code
void setup() {
  Serial.begin(9600);         // initializes the Serial connection @ 9600 baud

  attachInterrupt(digitalPinToInterrupt(CLOCK_ONE_BUT_PIN),buttonOnePressed,RISING);
  attachInterrupt(digitalPinToInterrupt(CLOCK_TWO_BUT_PIN),buttonTwoPressed,RISING);    
};


void loop() {
  delay(1000); 
  chessClock.tick();

}

void buttonOnePressed(){
  chessClock.buttonPressed(true);
}

void buttonTwoPressed(){
  chessClock.buttonPressed(false);
}
