void setup() {
pinMode(9, INPUT);  //버튼
pinMode(3, OUTPUT); 
pinMode(4, OUTPUT); 
pinMode(5, OUTPUT); 
}

void loop() {
digitalWrite(3, HIGH);
  if(digitalRead(9) == HIGH){
    delay(5000);
  }
  else {  delay(100);  }
  digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
  if(digitalRead(9) == HIGH){
    delay(5000);
  }
  else {   delay(100);  }
  digitalWrite(4, LOW);
  
  digitalWrite(5, HIGH);
  if(digitalRead(9) == HIGH){
    delay(5000);
  }
  else {    delay(100);  }
  digitalWrite(5, LOW);
}
