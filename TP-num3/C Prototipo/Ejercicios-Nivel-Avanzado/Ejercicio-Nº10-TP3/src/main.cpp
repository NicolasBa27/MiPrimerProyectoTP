#include <Arduino.h>

#define PIN1 14
#define PIN2 27
#define PIN3 26
#define LED 4

void setup()
{
  pinMode(PIN1, INPUT);
  pinMode(PIN2, INPUT);
  pinMode(PIN3, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  int reading1 = digitalRead(PIN1);
  int reading2 = digitalRead(PIN2);
  int reading3 = digitalRead(PIN3);

  if (reading1 == LOW && reading2 == LOW && reading3 == LOW)
  {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
  else if (reading1 == LOW && reading2 == LOW && reading3 == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
  else if (reading1 == LOW && reading2 == HIGH && reading3 == LOW)
  {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  else if (reading1 == LOW && reading2 == HIGH && reading3 == HIGH)
  {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}