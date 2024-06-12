#include <Arduino.h>

#define btn1 14
#define btn2 27
#define led1 16
#define led2 4

void setup()
{
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(led2, OUTPUT);
  pinMode(btn2, INPUT);
}

void loop()
{

  if (digitalRead(btn1) == HIGH)
  {
    digitalWrite(led1, HIGH);
    Serial.println("Verde encendido");
  }
  else
  {
    digitalWrite(led1, LOW);
    delay(100);
  }
  if (digitalRead(btn2) == HIGH)
  {
    digitalWrite(led2, HIGH);
    Serial.println("Azul encendido");
  }
  else
  {
    digitalWrite(led2, LOW);
    delay(100);
  }
}
