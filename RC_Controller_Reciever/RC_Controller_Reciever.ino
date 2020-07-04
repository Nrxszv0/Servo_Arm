const int CH1_PIN = 2;
const int CH2_PIN = 3;
const int CH3_PIN = 4;
const int CH4_PIN = 5;
const int CH5_PIN = 6;
const int CH6_PIN = 7;
int ch1, ch2, ch3, ch4, ch5, ch6 , timeout = 25000, dly = 10;
String ch1Msg = "Ch1: ", ch2Msg = "    ,Ch2: ", ch3Msg = "    ,Ch3: ", ch4Msg = "    ,Ch4: ", ch5Msg = "    ,Ch5: " , ch6Msg = "    ,Ch6: ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ch1 = pulseIn(CH1_PIN, HIGH, timeout); //timeout = 25 microseconds
   delay(dly);
  ch2 = pulseIn(CH2_PIN, HIGH, timeout);
   delay(dly);
  ch3 = pulseIn(CH3_PIN, HIGH, timeout);
   delay(dly);
  ch4 = pulseIn(CH4_PIN, HIGH, timeout);
   delay(dly);
  ch5 = pulseIn(CH5_PIN, HIGH, timeout);
   delay(dly);
  ch6 = pulseIn(CH6_PIN, HIGH, timeout);
   delay(dly);
  Serial.print(ch1Msg);
  Serial.print(ch1);
  Serial.print(ch2Msg);
  Serial.print(ch2);
  Serial.print(ch3Msg);
  Serial.print(ch3);
  Serial.print(ch4Msg);
  Serial.print(ch4);
  Serial.print(ch5Msg);
  Serial.print(ch5);
  Serial.print(ch6Msg);
  Serial.println(ch6);
 
}
