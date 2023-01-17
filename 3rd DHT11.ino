// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor
#include "DHT.h"
#define DHTPIN 2 // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 11
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor.
void setup() {
 Serial.begin(9600);
 dht.begin();
}
void loop() {
 delay(2000);
 float h = dht.readHumidity();
 float t = dht.readTemperature(); // Read temperature as Celsius (the default)
 Serial.print(F(" Humidity: "));
 Serial.print(h);
 Serial.print(F("% Temperature: "));
 Serial.print(t);
}
//connection
//ard d2 to signal pin of dht11
// ard gnd to gnd dht11
// ard 5v pin vcc dht11