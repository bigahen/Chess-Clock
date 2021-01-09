#include <SevenSegmentAsciiMap.h>
#include <SevenSegmentExtended.h>
#include <SevenSegmentFun.h>
#include <SevenSegmentTM1637.h>

const byte PIN_CLK = 2;   // define CLK pin (any digital pin)
const byte PIN_DIO = 3;   // define DIO pin (any digital pin)
SevenSegmentTM1637    display(PIN_CLK, PIN_DIO);

const byte PIN_CLK2 = 4;   // define CLK pin (any digital pin)
const byte PIN_DIO2 = 5;   // define DIO pin (any digital pin)
SevenSegmentTM1637    display2(PIN_CLK2, PIN_DIO2);

// run setup code
void setup() {
  Serial.begin(9600);         // initializes the Serial connection @ 9600 baud
  display.begin();            // initializes the display
  display.setBacklight(100);  // set the brightness to 100 %
  display.print("INIT");      // display INIT on the display
  delay(1000);                // wait 1000 ms

  display2.begin();            // initializes the display
  display2.setBacklight(100);  // set the brightness to 100 %
  display2.print("INIT");      // display INIT on the display
};


void loop() {
  // put your main code here, to run repeatedly:

}
