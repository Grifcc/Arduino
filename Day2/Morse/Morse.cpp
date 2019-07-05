#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin1,int pin2)
{
    pinMode(pin1,OUTPUT);
    pinMode(pin2,OUTPUT); 
    _pin1=pin1;
    _pin2=pin2;
}
void Morse::dot()
{
    digitalWrite(_pin1,  HIGH);
    tone(_pin2,2000);
    delay(250);
    digitalWrite(_pin1,LOW);
    noTone(_pin2);
    delay(250);
}
void Morse::dash()
{
    digitalWrite(_pin1,  HIGH);
    tone(_pin2,2000);
    delay(1000);
    digitalWrite(_pin1,LOW);
    tone(_pin2,2000);
    delay(250);
}

void Morse::show(char str)
{  
  switch(str)
  {
    case 'A': dash();break;
    case 'B': dash();dot();dot();dot();break;
    case 'C': dash();dot();dash();dot();break;
    case 'D': dash();dot();dot();break;
    case 'E': dot();break;
    case 'F': dot();dot();dash();dot();break;
    case 'G': dash();dash();dot();break;
    case 'H': dot();dot();dot();dot();break;
    case 'I': dot();dot();break;
    case 'J': dash();dot();dot();break;
    case 'K': dash();dot();dash();break;
    case 'L': dot();dash();dot();dot();break;
    case 'M': dash();dash();break;
    case 'N': dash();break;
    case 'O': dash();dash();dash();break;
    case 'P': dot();dash();dash();dot();break;
    case 'Q': dash();dash();dot();dash();break;
    case 'R': dot();dash();dot();break;
    case 'S': dot();dot();dot();break;
    case 'T': dash();break;
    case 'U': dot();dot();dash();break;
    case 'V': dot();dot();dot();dash();break;
    case 'W': dot();dash();dash();break;
    case 'X': dash();dot();dot();dash();break;
    case 'Y': dash();dot();dash();dash();break;
    case 'Z': dash();dash();dot();dot();break;
    case ' ': dot();dot();dot();break;
    case '\n':delay(500);break;
  } 
}
String Morse::judge(char str)
{
    
  String k="";
  switch(str)
  {
    case 'A': k="*-";break;
    case 'B': k="-***";break;
    case 'C': k="-*-*";break;
    case 'D': k="-**";break;
    case 'E': k="*";break;
    case 'F': k="**-*";break;
    case 'G': k="--*";break;
    case 'H': k="--*";break;
    case 'I': k="**";break;
    case 'J': k="*--";break;
    case 'K': k="-*-";break;
    case 'L': k="*-**";break;
    case 'M': k="--";break;
    case 'N': k="-*";break;
    case 'O': k="---";break;
    case 'P': k="*--*";break;
    case 'Q': k="--*-";break;
    case 'R': k="*-*";break;
    case 'S': k="***";break;
    case 'T': k="-";break;
    case 'U': k="**-";break;
    case 'V': k="***-";break;
    case 'W': k="*--";break;
    case 'X': k="-**-";break;
    case 'Y': k="-*--";break;
    case 'Z': k="--**";break;
    case ' ': k="/";break;
    case '\n':k="\n";break;
  } 
  return k;
}
