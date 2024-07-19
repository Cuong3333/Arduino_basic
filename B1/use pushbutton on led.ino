int congtac = 2;
int led=3;
void setup()
{
  pinMode(congtac, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int trangthai=digitalRead(congtac);
  if(trangthai==0)
  {
    digitalWrite(led, HIGH);
  }else
  {
    digitalWrite(led, LOW);
  }
}