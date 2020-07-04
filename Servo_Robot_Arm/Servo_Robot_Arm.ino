#include <Servo.h>
int sPin1 = 2, sPin2 = 3, sPin3 = 4, sPin4 = 5;
int sVal1=123, sVal2=75, sVal3=56, sVal4=143;
Servo ser1;
Servo ser2;
Servo ser3;
Servo ser4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
ser1.attach(sPin1);
ser2.attach(sPin2);
ser3.attach(sPin3);
ser4.attach(sPin4);
}

void loop() {
  // put your main code here, to run repeatedly:
ser1.write(sVal1);
ser2.write(sVal2);
ser3.write(sVal3);
ser4.write(sVal4);
}
