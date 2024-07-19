int GreenLed = 8;
int RedLed = 7;
int YellowLed = 9;
void setup()
{
  pinMode(GreenLed, OUTPUT);
  pinMode(RedLed, OUTPUT);
  pinMode(YellowLed, OUTPUT);
  
  
  digitalWrite(GreenLed, HIGH);
  digitalWrite(RedLed, HIGH);
  digitalWrite(YellowLed, HIGH);
}

void loop()
{
  digitalWrite(GreenLed, HIGH);
  digitalWrite(RedLed, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(GreenLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
}