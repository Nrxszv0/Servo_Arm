#include <Servo.h>
int sPin1 = 2, sPin2 = 3, sPin3 = 4, sPin4 = 5;
int sVal1=123, sVal2=75, sVal3=56, sVal4=143;
int potPin1=A3, potPin2=A2, potPin3=A1, potPin4=A0;
int potVal1, potVal2, potVal3, potVal4;
//Servo ser1;
//Servo ser2;
//Servo ser3;
//Servo ser4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//ser1.attach(sPin1);
//ser2.attach(sPin2);
//ser3.attach(sPin3);
//ser4.attach(sPin4);
pinMode(potPin1, INPUT);
pinMode(potPin2, INPUT);
pinMode(potPin3, INPUT);
pinMode(potPin4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal1 = analogRead(potPin1);
  potVal2 = analogRead(potPin2);
  potVal3 = analogRead(potPin3);
  potVal4 = analogRead(potPin4);
  Serial.print(potPin1);
  Serial.print("    ");
  Serial.print(potPin2);
  Serial.print("    ");
  Serial.print(potPin3);
  Serial.print("    ");
  Serial.println(potPin4);
//ser1.write(sVal1);
//ser2.write(sVal2);
//ser3.write(sVal3);
//ser4.write(sVal4);
}
