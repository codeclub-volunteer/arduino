#include <Servo.h>

Servo servo;
int notes[27] = { 392,330,330,349,294,294,262,294,330,349,392,392,392,392,330,330,330,349,294,294,262,330,392,330,294,330,262 }; 

void setup()
{
  pinMode(9, OUTPUT);  // r
  pinMode(10, OUTPUT); // g
  pinMode(11, OUTPUT); // b
  pinMode(7, INPUT);   // 스위치
  pinMode(8, OUTPUT);  // 스피커
  servo.attach(3);     // 모터
 }
 
void train() {
  if(digitalRead(7)==HIGH) {  // 스위치 누르면
    for (int i = 0; i < 27; i++) { 
      servo.write(i*6);
      tone (8, notes[ i ], 200); 
      delay (300); 
     } 
    delay(100); // 멜로디 중간에 짧게 멈추는 용도 
    
    for (int i = 0; i < 27; i++) { 
      servo.write(180-(i*6));
      tone (8, notes[ i ], 200); 
      delay (300); 
     } 
    delay(100); // 멜로디 중간에 짧게 멈추는 용도
   }
  }
  
void loop()
{
  if(digitalRead(7)==HIGH) {  // 스위치 누르면
    for (int i = 0; i < 27; i++) { 
      servo.write(i*6);
      tone (8, notes[ i ], 200); 
      delay (300); 
     } 
    delay(100); // 멜로디 중간에 짧게 멈추는 용도 
    
    for (int i = 0; i < 27; i++) { 
      servo.write(180-(i*6));
      tone (8, notes[ i ], 200); 
      delay (300); 
     } 
    delay(100); // 멜로디 중간에 짧게 멈추는 용도
   }


   //무드등
   
  //빨간색 켜기
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(11, LOW); 
  train();
  delay(1000);
  train();
  //초록색 켜기
  digitalWrite(9, LOW);
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  train();
  delay(1000);
  train();
  //파란색 켜기
  digitalWrite(9, LOW);
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  train();
  delay(1000);
  train();

  //노란색 켜기
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  train();
  delay(1000);
  train();

  //자홍색 켜기
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  train();
  delay(1000);
  train();

  //청록색 켜기
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH);
  train();
  delay(1000);
  train();

  //흰색 켜기
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, HIGH); 
  train();
  delay(1000);
  train();
}
