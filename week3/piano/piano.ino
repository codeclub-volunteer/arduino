void setup() {
pinMode(9, INPUT);  //도
pinMode(10, INPUT);  //레
pinMode(11, INPUT);  //미
pinMode(8, OUTPUT); // 스피커
}

void loop() {
  if(digitalRead(9) == HIGH){
    tone(8, 262, 100);
    delay(100);
  }
  
  
 else if(digitalRead(10) == HIGH){
    tone(8, 294, 100);
    delay(100);
  }
   else if(digitalRead(11) == HIGH){
    tone(8, 330, 100);
    delay(100);
  }
  else {
    delay(100);
  }
}
