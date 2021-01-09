#include <SevenSegmentAsciiMap.h>
#include <SevenSegmentExtended.h>
#include <SevenSegmentFun.h>
#include <SevenSegmentTM1637.h>

const byte PIN_CLK = 2;   // define CLK pin (any digital pin)
const byte PIN_DIO = 3;   // define DIO pin (any digital pin)
SevenSegmentTM1637    display(PIN_CLK, PIN_DIO);

const byte PIN_CLK2 = 4;   // define CLK pin (any digital pin)
const byte PIN_DIO2 = 5;   // define DIO pin (any digital pin)
SevenSegmentExtended    display2(PIN_CLK2, PIN_DIO2);

int maxMiniute = 99; 
int maxSecond = 59; 

int clockOneMinute = 0;
int clockTwoMinute = 99;

int clockOneSecond = 0;
int clockTwoSecond = 59;

// run setup code
void setup() {
  Serial.begin(9600);         // initializes the Serial connection @ 9600 baud
  display.begin();            // initializes the display
  display.setBacklight(50);  // set the brightness to 100 %
  display.print("INIT");      // display INIT on the display
  delay(1000);                // wait 1000 ms

  display2.begin();            // initializes the display
  display2.setBacklight(50);  // set the brightness to 100 %
  display2.printTime(clockTwoMinute, clockTwoSecond, false); 
};


void loop() {
  delay(1000); 

  if (clockTwoSecond == 0) {
    clockTwoSecond = 59; 
    clockTwoMinute -=1;
  } else {
    clockTwoSecond -=1; 
  }

   display2.printTime(clockTwoMinute, clockTwoSecond, false);

}
