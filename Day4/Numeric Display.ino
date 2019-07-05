int A=6;
int B=7;
int C=8;
int D=9;
int E=5;
int F=4;
int G=3;
int H=2;
int BCD[10][4]={
  {0,0,0,0},
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1},
  {0,1,0,0},
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1}
};
void show(int l)
{
  digitalWrite(A,BCD[l][3]);
  digitalWrite(B,BCD[l][2]);
  digitalWrite(C,BCD[l][1]);
  digitalWrite(D,BCD[l][0]);
}
void lock(int i)
{
  if(i==0)
  {
  digitalWrite(E,0);
    digitalWrite(F,1);
    digitalWrite(G,1);
    digitalWrite(H,1);
  }
  if(i==1)
  {
  digitalWrite(E,1);
    digitalWrite(F,0);
    digitalWrite(G,1);
    digitalWrite(H,1);
  }
  else if(i==2)
  {
  digitalWrite(E,1);
    digitalWrite(F,1);
    digitalWrite(G,0);
    digitalWrite(H,1);
  }
  else if(i==3)
  {
  digitalWrite(E,1);
    digitalWrite(F,1);
    digitalWrite(G,1);
    digitalWrite(H,0);
  }
  else if(i==4)
  {
  digitalWrite(E,1);
    digitalWrite(F,1);
    digitalWrite(G,1);
    digitalWrite(H,1);
  }
}

void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    String stri="";
    char  str;
    int flag=0;
  int num[4]={0,0,0,0};
    while (Serial.available() > 0) 
    {
        str=Serial.read();  
        delay(2);  //延迟保证传入正常
        stri+=str;
        flag=1;
    }
   if(flag)
   {
     
     while(stri.length()!=4)
       {
      stri='0'+stri;
       }
      Serial.println(stri);
      for(int i=0;stri[i]!='\0';i++)
      { 
          num[i]=stri[i]-48;
      }
      for(int j=0;j<4;j++)  
      {
        lock(j);
        show(num[3-j]);
        lock(4);
     }
   }
}
