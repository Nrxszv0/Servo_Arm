#include <Servo.h>
const int CH1_PIN = 2;
const int CH2_PIN = 3;
const int CH3_PIN = 4;
const int CH4_PIN = 5;
const int CH5_PIN = 6;
const int CH6_PIN = 7;
int ch1, ch2, ch3, ch4, ch5, ch6 , timeout = 25000, dly = 5;
int deadzone = 20;
int minRecvVal = 950, maxRecvVal = 2050;
String ch1Msg = "Ch1: ", ch2Msg = "    ,Ch2: ", ch3Msg = "    ,Ch3: ", ch4Msg = "    ,Ch4: ", ch5Msg = "    ,Ch5: " , ch6Msg = "    ,Ch6: ";
int sPin1 = 8, sPin2 = 9, sPin3 = 10, sPin4 = 11;
int sVal1 = 123, sVal2 = 75, sVal3 = 56, sVal4 = 143;
int maxAng = 160, minAng = 0;
Servo ser1;
Servo ser2;
Servo ser3;
Servo ser4;
void setup() {
  Serial.begin(9600);
  ser1.attach(sPin1);
  ser2.attach(sPin2);
  ser3.attach(sPin3);
  ser4.attach(sPin4);
}

void loop() {
  ch1 = pulseIn(CH1_PIN, HIGH, timeout); //timeout = 25 microseconds
  delay(dly);
  ch2 = pulseIn(CH2_PIN, HIGH, timeout);
  delay(dly);
  ch3 = pulseIn(CH3_PIN, HIGH, timeout);
  delay(dly);
  ch4 = pulseIn(CH4_PIN, HIGH, timeout);
  delay(dly);
//  ch5 = pulseIn(CH5_PIN, HIGH, timeout);
//  delay(dly);
//  ch6 = pulseIn(CH6_PIN, HIGH, timeout);
//  delay(dly);
  sVal1 = map(pulseToPWM(ch1), -255, 255, minAng, maxAng);
  sVal2 = map(pulseToPWM(ch2), -255, 255, minAng, maxAng);
  sVal3 = map(pulseToPWM(ch3), -255, 255, minAng, maxAng);
  sVal4 = map(pulseToPWM(ch4), -255, 255, minAng, maxAng);
  ser1.write(sVal1);
  ser2.write(sVal2);
  ser3.write(sVal3);
  ser4.write(sVal4);
  Serial.print(sVal1);
  Serial.print("\t\t");
  Serial.print(sVal2);
  Serial.print("\t\t");
  Serial.print(sVal3);
  Serial.print("\t\t");
  Serial.println(sVal4);
}
int pulseToPWM(int pulse) {
  if (pulse > 1000) {
    //Check if pulse is above 1000
    pulse = map(pulse, minRecvVal, maxRecvVal, -500, 500); //convert pulse to -500,500. Pulse is not always between 1000,2000 so not directly mapping to -255,255 provides leeway and more precision
    pulse = constrain(pulse, -255, 255); // any num less than -255 turns into -255, any num greater than 255 turns into 255
  }
  else {
    pulse = 0;
  }
  if (abs(pulse) <= deadzone) {
    pulse = 0;// if pulse near center then stop moving.
  }
  return pulse;
}
