int soundSensor=2; //This is the input pin connected to digital output of sound sensor
int LED=4; //This pin is connected to led for indication and input to motor driver
int motorPin1 = 5; // One motor wire connected to digital pin 5
int motorPin2 = 6; // One motor wire connected to digital pin 6
void setup() {
pinMode(soundSensor,INPUT);
pinMode(LED,OUTPUT);
// initialize the digital pins as an output:
pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
}
void loop()
{
 int SensorData=digitalRead(soundSensor);
 //Now to turn on
 if(SensorData==1) //If the sensor detected any sound
 {
rotateRight(50, 1000);
digitalWrite(LED, HIGH);
 }
}
void rotateRight(int speedOfRotate, int length)
{
 analogWrite(motorPin2, speedOfRotate); //rotates motor
 digitalWrite(motorPin1, LOW); // set the Pin motorPin1 LOW
 delay(length); //waits
 digitalWrite(motorPin2, LOW); // set the Pin motorPin2 LOW
 digitalWrite(LED, LOW);
}
//connection
//ard pin d2 to sensor digital out pin
//ard gnd to sensor gnd
// ard 5v to sensor vcc
// arduino d4 to led long leg
// ard d5 to one wire of dc motor
// ard d6 to another wire of dc
