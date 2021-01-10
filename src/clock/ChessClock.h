#ifndef ChessClock_H
#define ChessClock_H

#include "Clock.h"

const byte PIN_CLK1 = 6;  
const byte PIN_DIO1 = 7;
const byte PIN_CLK2 = 4;
const byte PIN_DIO2 = 5;

class ChessClock {

public: 

ChessClock (uint8_t initMin1, 
                    uint8_t initSec1,
                    uint8_t initMin2, 
                    uint8_t initSec2); 

void tick(); 

void clockSwap(); 

void buttonPressed(bool isButtonOne);

private:
  Clock clock1;
  Clock clock2; 
  bool clockOneTicking;

};

#endif
