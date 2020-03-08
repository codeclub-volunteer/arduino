// led 2개 버전
int led1=9;
int led2=10; // 각 포트 설정

void setup() {
  Serial.begin(9600); // 시리얼 모니터 오픈
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
 int cds=analogRead(A1);
 Serial.println(cds);

 if(cds<200){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    }
    delay(200);
}
