void setup()
{
  pinMode(4, OUTPUT);  //trig
  pinMode(3, INPUT);     //echo
  
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

 void loop()
{
  digitalWrite(4, HIGH);
  delayMicroseconds(10);
  digitalWrite(4,LOW);
  //초음파 발사
//물체까지의 시간
int duration = pulseIn(3, HIGH); 

//시간을 cm단위로 바꾼다.
int dis = duration / 29 / 2; 
 
if(dis<20)    digitalWrite(10, HIGH);
else           digitalWrite(10,LOW);
if(dis<15)    digitalWrite(9, HIGH);
else           digitalWrite(9,LOW);
if(dis<10)    digitalWrite(8, HIGH);
else           digitalWrite(8,LOW);

  delay(100);
}
