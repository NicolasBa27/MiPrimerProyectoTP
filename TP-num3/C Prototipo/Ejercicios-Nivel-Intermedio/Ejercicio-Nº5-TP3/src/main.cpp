#include <Arduino.h>

#define btn 14
#define led 16

void setup()
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{

  if (digitalRead(btn) == HIGH)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
    delay(10);
  }
}