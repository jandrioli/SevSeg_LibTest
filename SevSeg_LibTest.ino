

#include "SevenSeg.h"

SevenSeg show(2,8,4,6,3,1,7); //Instantiate a seven segment object

const int DIGITS = 4;
int digitPins[DIGITS] = {11, 10, 9, 12};
 
void setup() 
{

  show.setDigitPins(DIGITS, digitPins);
  show.setCommonAnode();
  show.setDPPin(5);
  show.setDutyCycle(99);

  //show.setDigitDelay(500);
  long _delay = millis();
  while (millis() - _delay < 2000)
    show.write("Hi!");_delay = millis();
  while (millis() - _delay < 2000)
    show.write("Nice");_delay = millis();
  while (millis() - _delay < 2000)
    show.write("to");_delay = millis();
  while (millis() - _delay < 2000)
    show.write("see");_delay = millis();
  while (millis() - _delay < 2000)
    show.write("you.");
}

void loop() 
{
  int what = random(0,999);
  long _delay = millis();
  while (millis() - _delay < 1000)
    show.write(what,3);
}
