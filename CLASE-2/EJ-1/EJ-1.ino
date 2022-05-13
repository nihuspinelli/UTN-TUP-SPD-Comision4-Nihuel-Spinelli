int buttonState = 0;
void setup()
{
	pinMode(2, INPUT);
	pinMode(5, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(13, OUTPUT);
}
void loop()
{
	buttonState=digitalRead(2);
	if (buttonState == HIGH) 
    {
		digitalWrite(5, HIGH);
    	delay(100);
		digitalWrite(9, LOW);
    	delay(100);
		digitalWrite(13, HIGH);
		delay(100);
		digitalWrite(5, LOW);
    	delay(100);
		digitalWrite(9, HIGH);
    	delay(100);
		digitalWrite(13, LOW);
		delay(100);
	}
  	else
    {
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);
      digitalWrite(13, LOW);
    }
}
