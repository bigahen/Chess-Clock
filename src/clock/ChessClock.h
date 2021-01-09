#ifndef ChessClock_H
#define ChessClock_H

#include "Clock.h"

const byte PIN_CLK1 = 2;  
const byte PIN_DIO1 = 3;
const byte PIN_CLK2 = 4;
const byte PIN_DIO2 = 5;

class ChessClock {

public: ChessClock (uint8_t initMin1, 
                    uint8_t initSec1,
                    uint8_t initMin2, 
                    uint8_t initSec2); 

private:
  Clock clock1;
  Clock clock2; 

};

#endif
