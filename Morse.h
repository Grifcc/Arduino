#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class   Morse
{
    public:
        Morse(int pin1,int pin2);
        void dot();
        void dash();
        void show(char str);
        String judge(char str);
    private:
        int _pin1;
        int _pin2;  
};
#endif
