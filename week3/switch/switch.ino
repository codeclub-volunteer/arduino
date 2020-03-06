void setup()
{
  pinMode(8, OUTPUT);  //LED
  pinMode(9, INPUT);  //버튼
}

void loop()
{
  if(digitalRead(9) == HIGH) {
    digitalWrite(8, HIGH);
 } 
  else {
    digitalWrite(8, LOW);
 }
}
