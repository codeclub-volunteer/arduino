void setup()
{
  pinMode(11, OUTPUT); //LED
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));
  analogWrite(11, analogRead(A0)/4);
}
