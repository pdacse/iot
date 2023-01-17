char Incoming_value = 0;              
void setup() 
{
  Serial.begin(9600);         
  pinMode(13, OUTPUT);        
}
void loop()
{
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        //New line 
    if(Incoming_value == '1')           
      digitalWrite(13, HIGH);  
    else if(Incoming_value == '0')      
      digitalWrite(13, LOW);   
  }
}
//connection
//ard 5v to vcc bluetooth 
//ard gnd to gnd of bluet module
//ard rx to tx of bluet module
//ard tx to rx of bluet module
//ard d12 to led anode(long leg) 
//ard gnd to led cathode(short leg)
