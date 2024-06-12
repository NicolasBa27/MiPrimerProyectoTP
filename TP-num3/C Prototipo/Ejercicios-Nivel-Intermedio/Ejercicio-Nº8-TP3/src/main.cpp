#include <Arduino.h>

#define led1 22
#define pul1 35
#define led2 23
#define pul2 32
#define led3 21
#define pul3 33
#define led4 19
#define pul4 25
#define led5 18
#define pul5 26
#define led6 5
#define pul6 27
#define led7 16
#define pul7 14
#define led8 2
#define pul8 12

void setup()
{
  Serial.begin(115200);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop()
{
  if ((digitalRead(pul1)) == HIGH)
  {
    digitalWrite(led1, 1);
    Serial.println("Led rojo prendido");
    if ((digitalRead(pul1)) == LOW)
    {
      digitalWrite(led1, 0);
      Serial.println("Led rojo apagado");
    }
  }
  else if ((digitalRead(pul2)) == HIGH)
  {
    digitalWrite(led2, 1);
    Serial.println("Led verde prendido");
    if ((digitalRead(pul2)) == LOW)
    {
      digitalWrite(led2, 0);
      Serial.println("Led verde apagado");
    }
  }
  else if ((digitalRead(pul3)) == HIGH)
  {
    digitalWrite(led3, 1);
    Serial.println("Led azul prendido");
    if ((digitalRead(pul3)) == LOW)
    {
      digitalWrite(led3, 0);
      Serial.println("Led azul apagado");
    }
  }
  else if ((digitalRead(pul4)) == HIGH)
  {
    digitalWrite(led4, 1);
    Serial.println("Led amarillo prendido");
    if ((digitalRead(pul4)) == LOW)
    {
      digitalWrite(led4, 0);
      Serial.println("Led amarillo apagado");
    }
  }
  else if ((digitalRead(pul5)) == HIGH)
  {
    digitalWrite(led5, 1);
    Serial.println("Led marron prendido");
    if ((digitalRead(pul5)) == LOW)
    {
      digitalWrite(led5, 0);
      Serial.println("Led marron apagado");
    }
  }
  else if ((digitalRead(pul6)) == HIGH)
  {
    digitalWrite(led6, 1);
    Serial.println("Led celeste prendido");
    if ((digitalRead(pul6)) == LOW)
    {
      digitalWrite(led6, 0);
      Serial.println("Led celeste apagado");
    }
  }
  else if ((digitalRead(pul7)) == HIGH)
  {
    digitalWrite(led7, 1);
    Serial.println("Led rosa prendido");
    if ((digitalRead(pul7)) == LOW)
    {
      digitalWrite(led7, 0);
      Serial.println("Led rosa apagado");
    }
  }
  else if ((digitalRead(pul8)) == HIGH)
  {
    digitalWrite(led8, 1);
    Serial.println("Led violeta prendido");
    if ((digitalRead(pul8)) == LOW)
    {
      digitalWrite(led8, 0);
      Serial.println("Led violeta apagado");
    }
  }
}