
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  // tất cả đèn sáng
  for(int i = 2; i < 9; i++)
  {
    digitalWrite(i, HIGH);
  }
}

void loop()
{
  // tắt lần lượt từ đèn 1-7
  
  for(int i = 2; i < 9; i++)
  {
    digitalWrite(i, LOW);
    delay(500);
  }
  // sáng từ 7 đến 1
  for(int i = 2; i < 9; i++)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
  //sáng chẵn lẻ tắt lập lại 5 lần
  int cout = 1;
  while(cout < 6)
  {
    for(int i = 2; i < 9; i++)
    {
      if((i-1)%2 != 0)
      {
        digitalWrite(i, LOW);
      }else
      {
        digitalWrite(i, HIGH);
      }   
    }
    delay(500);
    cout++;
    for(int i = 2; i < 9; i++)
    {
      if((i-1)%2 != 0)
      {
        digitalWrite(i, HIGH);
      }else
      {
        digitalWrite(i, LOW);
      }   
    }
    delay(500);
    cout++;
  }
  }