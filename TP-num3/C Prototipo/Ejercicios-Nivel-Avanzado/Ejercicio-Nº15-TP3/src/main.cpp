#include <Arduino.h>

#define LED1 5
#define LED2 17
#define LED3 16
#define LED4 4
char comando;

void setup()
{
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  Serial.println("Ingrese un número del 1 al 8 para controlar los LEDs:");
  Serial.println("1: Encender LED1");
  Serial.println("2: Apagar LED1");
  Serial.println("3: Encender LED2");
  Serial.println("4: Apagar LED2");
  Serial.println("5: Encender LED3");
  Serial.println("6: Apagar LED3");
  Serial.println("7: Encender LED4");
  Serial.println("8: Apagar LED4");
}

void loop()
{
  if (Serial.available() > 0)
  {
    comando = Serial.read();
    Serial.print(comando);
    switch (comando)
    {
    case '1':
      digitalWrite(LED1, HIGH);
      break;
    case '2':
      digitalWrite(LED1, LOW);
      break;
    case '3':
      digitalWrite(LED2, HIGH);
      break;
    case '4':
      digitalWrite(LED2, LOW);
      break;
    case '5':
      digitalWrite(LED3, HIGH);
      break;
    case '6':
      digitalWrite(LED3, LOW);
      break;
    case '7':
      digitalWrite(LED4, HIGH);
      break;
    case '8':
      digitalWrite(LED4, LOW);
      break;
    }
  }
}