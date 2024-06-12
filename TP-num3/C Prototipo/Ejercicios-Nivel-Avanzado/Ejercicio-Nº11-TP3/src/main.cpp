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
#define led6 5
#define led7 16
#define led8 2

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
    delay(200);
    digitalWrite(led2, 1);
    delay(200);
    digitalWrite(led3, 1);
    delay(200);
    digitalWrite(led4, 1);
    delay(200);
    digitalWrite(led1, 0);
    delay(200);
    digitalWrite(led2, 0);
    delay(200);
    digitalWrite(led3, 0);
    delay(200);
    digitalWrite(led4, 0);
  }
  else if ((digitalRead(pul1)) == LOW)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
  }
  if ((digitalRead(pul2)) == HIGH)
  {
    digitalWrite(led1, 1);
    delay(200);
    digitalWrite(led3, 1);
    delay(200);
    digitalWrite(led6, 1);
    delay(200);
    digitalWrite(led8, 1);
    delay(200);
    digitalWrite(led1, 0);
    delay(200);
    digitalWrite(led3, 0);
    delay(200);
    digitalWrite(led6, 0);
    delay(200);
    digitalWrite(led8, 0);
  }
  else if ((digitalRead(pul2)) == LOW)
  {
    digitalWrite(led1, 0);
    digitalWrite(led3, 0);
    digitalWrite(led6, 0);
    digitalWrite(led8, 0);
  }
  if ((digitalRead(pul3)) == HIGH)
  {
    digitalWrite(led1, 1);
    delay(500);
    digitalWrite(led2, 1);
    delay(500);
    digitalWrite(led3, 1);
    delay(500);
    digitalWrite(led4, 1);
    delay(500);
    digitalWrite(led5, 1);
    delay(500);
    digitalWrite(led6, 1);
    delay(500);
    digitalWrite(led7, 1);
    delay(500);
    digitalWrite(led8, 1);
    delay(500);
    digitalWrite(led1, 0);
    delay(500);
    digitalWrite(led2, 0);
    delay(500);
    digitalWrite(led3, 0);
    delay(500);
    digitalWrite(led4, 0);
    delay(500);
    digitalWrite(led5, 0);
    delay(500);
    digitalWrite(led6, 0);
    delay(500);
    digitalWrite(led7, 0);
    delay(500);
    digitalWrite(led8, 0);
  }
  else if ((digitalRead(pul3)) == LOW)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }
  if ((digitalRead(pul4)) == HIGH)
  {
    digitalWrite(led8, 1);
    delay(100);
    digitalWrite(led7, 1);
    delay(100);
    digitalWrite(led6, 1);
    delay(100);
    digitalWrite(led5, 1);
    delay(100);
    digitalWrite(led4, 1);
    delay(100);
    digitalWrite(led3, 1);
    delay(100);
    digitalWrite(led2, 1);
    delay(100);
    digitalWrite(led1, 1);
    delay(100);
    digitalWrite(led8, 0);
    delay(100);
    digitalWrite(led7, 0);
    delay(100);
    digitalWrite(led6, 0);
    delay(100);
    digitalWrite(led5, 0);
    delay(100);
    digitalWrite(led4, 0);
    delay(100);
    digitalWrite(led3, 0);
    delay(100);
    digitalWrite(led2, 0);
    delay(100);
    digitalWrite(led1, 0);
  }
  else if ((digitalRead(pul4)) == LOW)
  {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    digitalWrite(led4, 0);
    digitalWrite(led5, 0);
    digitalWrite(led6, 0);
    digitalWrite(led7, 0);
    digitalWrite(led8, 0);
  }
  else
  {
    delay(300);
  }
}
