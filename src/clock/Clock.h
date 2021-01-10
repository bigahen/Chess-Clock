#ifndef Clock_H
#define Clock_H

#include <SevenSegmentAsciiMap.h>
#include <SevenSegmentExtended.h>
#include <SevenSegmentFun.h>
#include <SevenSegmentTM1637.h>

const byte TICKS_PER_SECOND = 20; 

class Clock {

public: 

Clock (uint8_t pinClk, uint8_t pinDIO, uint8_t initMin, uint8_t initSec); 

bool tick();

private:
  uint8_t _min;
  uint8_t _sec;
  
  SevenSegmentExtended display;

};


#endif
