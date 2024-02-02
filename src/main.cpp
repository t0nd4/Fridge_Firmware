#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

bool mag;
unsigned long t0 = 0;
bool buzzerState = 0;
const long buzzerTime = 1000;

#define buzzer 5


void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(A3,INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
 buzzerState = digitalRead(buzzer);
 
 lcd.init();
 lcd.setCursor(0,0);
 lcd.print(buzzerState); 
 
 unsigned long currentMillis = millis();

 if(mag == 1)
 {
    if(buzzerState == 1)
    {
      if(currentMillis - t0 >= buzzerTime)
      {
        noTone(buzzer);
        t0 = currentMillis;
      }
    }
    if(buzzerState == 0)
    {
      if(currentMillis - t0 >= buzzerTime)
      {
        tone(buzzer, 200);
        t0 = currentMillis;
      }
    }
 }

 if(mag == 0)
 {
    noTone(buzzer);
 }
}