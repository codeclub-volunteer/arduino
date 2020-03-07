#include<Servo.h>
Servo servo;

void setup() {
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  servo.attach(7);
}
void loop() {

  int angle;
  
  if(digitalRead(8) == LOW) {
    servo.write(20);
  }
  else if(digitalRead(9) == LOW) {
    servo.write(90);
  }
  else if(digitalRead(10) == LOW) {
    servo.write(170);
  }
}
