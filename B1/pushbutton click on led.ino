int congtac=2;
int led=3;
int ttled=0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(congtac, INPUT);
  digitalWrite(led, LOW);
  
}

void loop()
{
  int trangthai=digitalRead(congtac);
  int ledsang=digitalRead(led);
  if(trangthai==1 && ledsang==ttled)
  {
    digitalWrite(led, !ttled);
    ttled=!ttled;
    delay(100);
  }
}