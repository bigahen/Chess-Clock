#include "Clock.h"
#include "Arduino.h"

Clock::Clock(uint8_t pinClk, uint8_t pinDIO, uint8_t initMin, uint8_t initSec) : display(pinClk, pinDIO){
  _min = initMin;
  _sec = initSec;
}
