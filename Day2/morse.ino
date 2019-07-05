#include <Morse.h>
Morse morse(13,6);
void setup() 
{ 
  Serial.begin(9600);        
}

void loop() 
{ 
 char s;
 String temp="";
 String   stri="";
 int flag=0;
 while (Serial.available() > 0) 
 {
    s=Serial.read();  
    temp+=s;
    delay(2);  //延迟保证传入正常
    flag=1;

 }
 if(flag)
  {
    String stri="";
    temp.toUpperCase(); 
    for(int i=0;temp[i]!='\0';i++)
    {   
         stri=stri+' '+morse.judge(temp[i]);
    }
    Serial.println(stri);
  }
  for(int i=0;temp[i]!='\0';i++)
  {   
      morse.show(temp[i]);
  }
  
}
