#define IRout 10
#define led 5
int counter=0;
void setup()
{
pinMode(led,OUTPUT);
pinMode(IRout,INPUT);
Serial.begin(9600); 
}
void loop()
{
if (digitalRead(IRout)== LOW) 
{
 digitalWrite(led,HIGH); 
 counter ++; 
 delay(10);
}
 else

{
digitalWrite(led,LOW); delay(10); }
Serial.println("total no of person entered the room");
Serial.println(counter);
}
//CONNECTIONS 
//ard uno d10 to out irsensor
//ard gnd to gnd ir sensor
//ard 5v pin vcc irsensor
//ard d5 to buzzer red wire
// gnd to buzzer black wire