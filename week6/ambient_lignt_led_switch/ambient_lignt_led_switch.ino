void setup()
{
   Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);  //LED
  pinMode(9, INPUT);  //버튼
}

void loop()
{
  Serial.println(analogRead(A0));
  if(analogRead(A0)<250){
    digitalWrite(3, HIGH);
    if(digitalRead(9) == HIGH) {
      digitalWrite(3, LOW);
    } 
  }
  else if(analogRead(A0)>=250){
    digitalWrite(3, LOW);
    if(digitalRead(9) == HIGH) {
      digitalWrite(3, HIGH);
    } 
  }
}
