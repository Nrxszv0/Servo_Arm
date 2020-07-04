 const int CH2_PIN = 7;
int ch2, timeout = 25000, dly = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ch2 = pulseIn(CH2_PIN, HIGH, timeout); //timeout = 25 microseconds
  Serial.println(ch2);
  delay(dly);
}
