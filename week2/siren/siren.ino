void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
}
void loop() {
  tone(10,500,100);
  digitalWrite(9, HIGH); //파란불 켜기
  digitalWrite(8, LOW); //빨간불 끄기
  delay(200);

  tone(10, 1000, 100);
  digitalWrite(9, LOW); //파란불 끄기
  digitalWrite(8, HIGH); //빨간불 켜기
  delay(200);
}
