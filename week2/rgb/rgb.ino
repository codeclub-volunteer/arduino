void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
 }

void loop()
{
  //빨간색 켜기
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
  delay(1000);
  //초록색 켜기
  digitalWrite(8, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH);
  delay(1000);

  //파란색 켜기
  digitalWrite(8, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH);
  delay(1000);
}
