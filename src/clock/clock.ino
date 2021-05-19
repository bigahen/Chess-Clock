#include "ChessClock.h"

const byte CLOCK_ONE_BUT_PIN = 2;
const byte CLOCK_TWO_BUT_PIN = 3;

int maxMiniute = 99; 
int maxSecond = 59; 

int clockOneMinute = 5;
int clockTwoMinute = 99;

int clockOneSecond = 0;
int clockTwoSecond = 59;

ChessClock chessClock (clockOneMinute, clockOneSecond, clockTwoMinute, clockTwoSecond);

// run setup code
void setup() {
  Serial.begin(9600);         // initializes the Serial connection @ 9600 baud

  attachInterrupt(digitalPinToInterrupt(CLOCK_ONE_BUT_PIN),buttonOnePressed,RISING);
  attachInterrupt(digitalPinToInterrupt(CLOCK_TWO_BUT_PIN),buttonTwoPressed,RISING);    
};


void loop() {
  delay(1000 / TICKS_PER_SECOND); 
  chessClock.tick();

}

void buttonOnePressed(){
  chessClock.buttonPressed(true);
}

void buttonTwoPressed(){
  chessClock.buttonPressed(false);
}
