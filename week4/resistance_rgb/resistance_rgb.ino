void setup()
{  pinMode(9, OUTPUT); //R
  pinMode(10,OUTPUT); //G
  pinMode(11,OUTPUT); //B
  Serial.begin(9600);  }

void loop()
{  Serial.println(analogRead(A0));
  int value = analogRead(A0)/4;
  if(0<=value and value< 3){
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);   }


  else if(3<value and value<=39){
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW); }

  else if(39<=value and value<=75){
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW); 
  }
else if(75<value and value<=111){
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH); 
  }
  else if(111<value and value<=147){
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW); 
  }
else if(147<value and value<=183){
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH); 
  }
  else if(183<value and value<=219){
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH); 
  }
  else {
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH); 
  }
  
}
