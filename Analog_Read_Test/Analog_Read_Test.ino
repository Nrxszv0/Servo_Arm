int potPin1 = A3, potPin2 = A2, potPin3 = A1, potPin4 = A0;
int potVal1, potVal2, potVal3, potVal4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
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
  Serial.print(potVal1);
  Serial.print("\t\t");
  Serial.print(potVal2);
  Serial.print("\t\t");
  Serial.print(potVal3);
  Serial.print("\t\t");
  Serial.println(potVal4);
}
