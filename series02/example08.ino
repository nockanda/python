void setup() {
  Serial.begin(9600);
}
void loop() {
  //가변저항값을 측정해서 0.1초간격으로 파이썬으로 전송한다!
  //A0에 연결된 가변저항값을 측정해라!
  int mydata = analogRead(A0); //0~1023
  Serial.println(mydata);
  delay(100);
}

