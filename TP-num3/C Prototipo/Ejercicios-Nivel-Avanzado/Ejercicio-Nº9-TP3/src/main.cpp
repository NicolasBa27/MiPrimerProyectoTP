#include <Arduino.h>

#define LED_PIN_1 18
#define LED_PIN_2 17
#define LED_PIN_3 4
#define BUTTON_PIN 27

int secuencia = 0;

void setup()
{
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop()
{
  if (digitalRead(BUTTON_PIN) == LOW)
  {
    secuencia++;
    if (secuencia > 2)
    {
      secuencia = 0;
    }
    digitalWrite(LED_PIN_1, LOW);
    digitalWrite(LED_PIN_2, LOW);
    digitalWrite(LED_PIN_3, LOW);

    if (secuencia == 0)
    {
      digitalWrite(LED_PIN_1, HIGH);
      delay(150);
      digitalWrite(LED_PIN_1, LOW);
      delay(150);
      digitalWrite(LED_PIN_2, HIGH);
      delay(150);
      digitalWrite(LED_PIN_2, LOW);
      delay(150);
      digitalWrite(LED_PIN_3, HIGH);
      delay(150);
      digitalWrite(LED_PIN_3, LOW);
    }
    else if (secuencia == 1)
    {
      digitalWrite(LED_PIN_3, HIGH);
      delay(150);
      digitalWrite(LED_PIN_3, LOW);
      delay(150);
      digitalWrite(LED_PIN_2, HIGH);
      delay(150);
      digitalWrite(LED_PIN_2, LOW);
      delay(150);
      digitalWrite(LED_PIN_1, HIGH);
      delay(150);
      digitalWrite(LED_PIN_1, LOW);
    }
    else if (secuencia == 2)
    {
      digitalWrite(LED_PIN_2, HIGH);
      delay(150);
      digitalWrite(LED_PIN_2, LOW);
      delay(150);
      digitalWrite(LED_PIN_3, HIGH);
      delay(150);
      digitalWrite(LED_PIN_3, LOW);
      delay(150);
      digitalWrite(LED_PIN_1, HIGH);
      delay(150);
      digitalWrite(LED_PIN_1, LOW);
    }
    delay(200);
  }
}
