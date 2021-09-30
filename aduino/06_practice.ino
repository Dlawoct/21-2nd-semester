int ledPin = 9;     // LED는 디지털 핀 9번에 연결
int val = 255;        // 읽은 값을 저장할 변수

void setup() {
  pinMode(ledPin, OUTPUT);  // 핀을 출력으로 설정
}

void loop() {
  analogWrite(ledPin, val); // analogRead 값은 0부터 1023까지, analogWrite 값은 0 부터 255까지
}
