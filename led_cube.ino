#include "Animations.h"

Animations animation;

void setup () {  
  for (int n = 2; n <= 13; n++) {
    pinMode(n, OUTPUT);
    digitalWrite(n, LOW);
  }
}

void loop () {
  animation.all();
  delay(1000);
  animation.layers();
  delay(1000);
  animation.fireflies(25);
  delay(1000);
}
