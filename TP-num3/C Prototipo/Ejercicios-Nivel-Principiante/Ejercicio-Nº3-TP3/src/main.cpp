#include <Arduino.h>

#define led1 18
#define led2 5
#define led3 16

void setup()
{
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  Serial.println("led rojo prendido");
  delay(500);
  digitalWrite(led1, LOW);
  Serial.println("led rojo apagado");
  delay(500);

  digitalWrite(led2, HIGH);
  Serial.println("led amarillo prendido");
  delay(500);
  digitalWrite(led2, LOW);
  Serial.println("led amarillo apagado");
  delay(500);

  digitalWrite(led3, HIGH);
  Serial.println("led verde prendido");
  delay(500);
  digitalWrite(led3, LOW);
  Serial.println("led verde apagado");
  delay(500);
}