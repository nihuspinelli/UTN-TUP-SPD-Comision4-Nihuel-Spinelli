 int Led1 = 5;
 int Led2 = 13;
 int pot = A0;
 int sensorValue = 0;
 int outputValue = 0;
void setup()
{
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  Test_Led();
}
void loop()
{
  sensorValue = analogRead(pot);
  outputValue = map(sensorValue, 0, 1023, 0, 254);
  analogWrite(Led1, outputValue);
  outputValue = map(sensorValue, 0, 1023, 254, 0);
  analogWrite(Led2, outputValue);
}
void Test_Led()
{
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  delay(300);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  delay(300);
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  delay(300);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  delay(300);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
}