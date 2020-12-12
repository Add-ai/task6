#ifndef Blink.h
#define Blink.h

#include <Arduino.h>

#define ON true
#define OFF false

class Blink
{
 private:
    int ledPin;
  public:
    LedPin(int l){
      ledPin = l;
    }
    void blink();
};

#endif