void setup() {
pinMode(9, INPUT);  
pinMode(8, OUTPUT); 
}

void loop() {
 
  if(digitalRead(9) == HIGH){
    tone(8, 500, 100);
    delay(100);
  }
  else {
    delay(100);
  }
}
