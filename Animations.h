#ifndef Animations_h   // To make sure you don't declare the function more than once by including the header multiple times.
#define Animations_h

#include <Arduino.h>

class Animations {
  public:
    Cube();
    void off();
    void all();
    void layers();
    void fireflies(int x);
};

#endif
