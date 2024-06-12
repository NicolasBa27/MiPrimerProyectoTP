#include <Arduino.h>

#define LED1 4
#define LED2 17
#define btn1 12
#define btn2 14
#define LED3 2

int contador = 0;
void setup()
{
  Serial.begin(115200);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
}

void loop()
{
  // contador de pulsacion
  if (digitalRead(btn1) == HIGH)
  {
    contador++;
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
    delay(250);
    digitalWrite(LED2, LOW);
    delay(250);
    Serial.print("Cantidad de veces presionado es: ");
    Serial.println(contador);
  }
  // restador de pulsacion
  if (digitalRead(btn2) == HIGH)
  {
    contador--;
    digitalWrite(LED3, LOW);
    digitalWrite(LED1, HIGH);
    delay(250);
    digitalWrite(LED1, LOW);
    delay(250);
    Serial.print("Cantidad de veces presionado es: ");
    Serial.println(contador);
  }
  // luz testigo de encendido y espera
  else
  {
    digitalWrite(LED3, HIGH);
  }
}