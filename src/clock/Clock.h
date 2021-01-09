#ifndef Clock_H
#define Clock_H

#include <SevenSegmentAsciiMap.h>
#include <SevenSegmentExtended.h>
#include <SevenSegmentFun.h>
#include <SevenSegmentTM1637.h>

class Clock {

public: Clock (uint8_t pinClk, uint8_t pinDIO, uint8_t initMin, uint8_t initSec); 

private:
  uint8_t _min;
  uint8_t _sec;
  
  SevenSegmentExtended display;

};


#endif
