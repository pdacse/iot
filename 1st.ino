#define led 10
#define buzzer 5
void setup()
{
pinMode(led,OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
Serial.println("LED ON/OFF system");
}
void loop()
{
Serial.println("LED is ON now");
digitalWrite(led, HIGH);
digitalWrite(buzzer, HIGH);
delay(2000);
Serial.println("LED is OFF now");
digitalWrite(led, LOW);
digitalWrite(buzzer, LOW);
delay(2000);
}

// CONNECTIONS 
// ard uno to long leg
// gnd to short leg
// ard uno  d5 to buzzer red wire
// gnd buzzer black wire 