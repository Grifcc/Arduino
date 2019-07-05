int A=2;
int B=3;
int C=4;
int D=5;
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
void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
    int num=0;
    int flag=0;
    while (Serial.available() > 0) 
    {
        num=Serial.read();  
        delay(2);  //延迟保证传入正常
        flag=1;
        num=num-48;
  
    }
   if(flag)
   {
      show(num);
      delay(100);
   }

}
