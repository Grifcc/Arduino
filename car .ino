int rm1=3;
int rm2=5;
int lm1=4;
int lm2=2;
int rd=7;
int ld=6;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void  forward()
{
 digitalWrite(rm1,HIGH);
 digitalWrite(rm2,LOW);
 digitalWrite(lm1,HIGH);
 digitalWrite(lm2,LOW);
 digitalWrite(ld,HIGH);
 digitalWrite(rd,HIGH);
}
void  backward()
{
 digitalWrite(rm2,HIGH);
 digitalWrite(rm1,LOW);
 digitalWrite(lm2,HIGH);
 digitalWrite(lm1,LOW);
 digitalWrite(ld,LOW);
 digitalWrite(rd,LOW);
}
void  left()
{
 digitalWrite(rm1,LOW);
 digitalWrite(rm2,HIGH);
 digitalWrite(lm1,HIGH);
 digitalWrite(lm2,LOW);
 digitalWrite(ld,HIGH);
 digitalWrite(rd,LOW);
}
void  right()
{
 digitalWrite(rm1,HIGH);
 digitalWrite(rm2,LOW);
 digitalWrite(lm1,LOW);
 digitalWrite(lm2,HIGH);
 digitalWrite(ld,LOW);
 digitalWrite(rd,HIGH);
}
void stop()
{
  digitalWrite(rm1,LOW);
  digitalWrite(rm2,LOW);
  digitalWrite(lm1,LOW);
  digitalWrite(lm2,LOW);
  digitalWrite(ld,LOW);
  digitalWrite(rd,LOW);
  delay(100);
}

void loop()
{
  forward();
  delay(10000);
  stop();
  backward();
  delay(10000);
  stop();
  right();
  delay(10000);
  stop();
  left();
  delay(10000);
  stop();
			
}