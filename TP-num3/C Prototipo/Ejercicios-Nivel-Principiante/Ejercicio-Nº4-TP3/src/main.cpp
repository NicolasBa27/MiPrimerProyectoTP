#include <Arduino.h>

#define btn1 14
#define led 16

bool touch = 0;

void setup()
{

  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(btn1, INPUT);
}

void loop()
{
  touch = digitalRead(btn1);
  if (touch == HIGH)
  {
    digitalWrite(led, HIGH);
    Serial.println("prendido");
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("apagado");
  }
}