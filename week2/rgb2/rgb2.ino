void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
 }

void loop()
{
  //흰색 켜기
  digitalWrite(8, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  delay(1000);
}
