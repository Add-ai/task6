#include <Arduino.h>
#include "Blink.h"

Blink::Blink(int l)
{
	ledPin = l;
}

void Blink::blink()
{
    for (int a=0; a<=255;a++) { 
      analogWrite(ledPin,a);
      delay(8);           
      }
    for (int a=255; a>=0;a--) { 
      analogWrite(ledPin,a);
      delay(8);           
      }
}
