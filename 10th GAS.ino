int GAS_VAL = 0;
void setup()
{
 pinMode(A0, INPUT); // MQ-6 A0 Pin
 Serial.begin(9600);
 pinMode(11,OUTPUT); // LED Green
 pinMode(12,OUTPUT); // LED Red
}
void loop()
{
 GAS_VAL = analogRead(A0);
 Serial.println(GAS_VAL);
if (GAS_VAL > 500)
{

 Serial.println(" LPG Detected ");
 digitalWrite(11,HIGH);
 digitalWrite(12,LOW);
 }

 else
{
 Serial.println("LPG Not Detected ");
 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 }

 delay(10);
}

//ard A0 to analog outpin of MQ-6
//ard 5v to vcc of MQ_6
//ard gnd to gnd MQ-6
//ard d11 to led long leg
//ard gnd to short leg 
//ard d12 to long leg
//ard gnd to short leg