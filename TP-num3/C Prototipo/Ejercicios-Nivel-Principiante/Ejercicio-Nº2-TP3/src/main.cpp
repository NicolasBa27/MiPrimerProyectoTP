#include <Arduino.h>

#define led 18

void setup()
{
  Serial.begin(115200);
  pinMode(led, OUTPUT);
}

void loop()
{

  digitalWrite(led, HIGH);
  Serial.println("prendido");
  delay(1000);

  digitalWrite(led, LOW);
  Serial.println("apagado");
  delay(1000);
}