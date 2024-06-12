#include <Arduino.h>

#define LED1 18
#define LED2 4
#define btn1 27
#define btn2 26
#define btn3 25

int lectura1 = 0;
int lectura2 = 0;
int lectura3 = 0;

void setup()
{
  Serial.begin(115200);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(btn3, INPUT);
}

void loop()
{
  if (digitalRead(btn1) == HIGH)
  {
    lectura1++;
    Serial.print("*");
    delay(250);
  }
  else if (digitalRead(btn2) == HIGH)
  {
    lectura2++;
    Serial.print("*");
    delay(250);
  }
  else if (digitalRead(btn3) == HIGH)
  {
    lectura3++;
    Serial.print("*");
    delay(250);
  }
  if (lectura1 == 2 && lectura2 == 1 && lectura3 == 3)
  {
    digitalWrite(LED1, HIGH);
    delay(1500);
    digitalWrite(LED1, LOW);
    delay(1000);
    Serial.println(" PUEDE PASAR. ");
  }
  else if (lectura1 > 2 || lectura2 > 1 || lectura3 > 3)
  {
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
    lectura1 = 0;
    lectura2 = 0;
    lectura3 = 0;
    Serial.println(" CONTRASEÑA INCORRECTA. ");
  }
}