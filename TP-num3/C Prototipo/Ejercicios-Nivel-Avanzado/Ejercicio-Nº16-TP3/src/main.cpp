#include <Arduino.h>

#define LED1 16
#define LED2 17
#define LED3 5
#define LED4 18

#define btn1 25
#define btn2 14

void setup()
{
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.println("Mantenga presionado el boton ROJO en caso de emergencias.");
  Serial.println("BOTON VERDE terminar con llamado de emergencia.");
}

void loop()
{
  if (digitalRead(btn1) == HIGH)
  {
    while (digitalRead(btn1) == HIGH)
    {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
      delay(100);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      delay(300);
      Serial.println(" EMERGENCIA !! ");
    }
  }
  else if (digitalRead(btn2) == HIGH)
  {
    delay(500);
    Serial.println(" LLAMADO CANCELADO... ");
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
  }
}