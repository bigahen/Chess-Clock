#include "Clock.h"
#include "Arduino.h"

Clock::Clock(uint8_t pinClk, uint8_t pinDIO, uint8_t initMin, uint8_t initSec) : display(pinClk, pinDIO){
  _min = initMin;
  _sec = initSec;
  _ticks = TICKS_PER_SECOND; 
  display.begin();            // initializes the display
  display.setBacklight(50);  // set the brightness to 50 %
  display.printTime(_min, _sec, false);
}

bool Clock::tick() {

  _ticks -= 1; 

  if (_ticks == 0) {
    tickSecond();
    _ticks = TICKS_PER_SECOND;
  }
  
}

void Clock::tickSecond() {
  if (_sec == 0) {
    _sec = 59; 
    _min -=1;
  } else {
    _sec -=1; 
  }
  display.printTime(_min, _sec, false);
  return _sec == 0 && _min == 0;
}
