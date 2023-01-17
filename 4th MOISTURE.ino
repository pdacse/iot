#define sensorPin A0
#define limit 50
#define led 13

void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);
}
void loop() 
{
int sensorvalue=analogRead(sensorPin);
Serial.println("Analog Value : ");
Serial.println(sensorvalue);
if (sensorvalue < limit)
 {
    digitalWrite(led, HIGH);
 }
else
{
   digitalWrite(led, LOW);
 }
delay(1000);
}
//connection
//ard ao to ao of moisture sensor
//ard gnd to gnd moisture sensor
//ard 5v pin to vcc of moisture sensor
//ard d13 to long leg led
//ard gnd to short leg