#include "ChessClock.h"

ChessClock::ChessClock(uint8_t initMin1, 
                    uint8_t initSec1,
                    uint8_t initMin2, 
                    uint8_t initSec2) : 
                    clock1(PIN_CLK1, PIN_DIO1, initMin1, initSec1), 
                    clock2(PIN_CLK2, PIN_DIO2, initMin2, initSec2) {}
