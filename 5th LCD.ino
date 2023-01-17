#include<Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27,16,2);
void setup()
{
  lcd.init ();
  lcd.backlight ();
}
void loop()
{
  lcd.setCursor (0,0);
  lcd.print("hello");
  delay(5000);
  lcd.clear();
}
//connection
//ard 5v to vcc
//sda to ard a4
//scc to ard a5
//gnd to gnd