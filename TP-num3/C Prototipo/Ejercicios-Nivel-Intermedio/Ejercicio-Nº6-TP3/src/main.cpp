#include <Arduino.h>

const int boton = 2;
const int ledPin = 17;

int estadoBoton;
int estadoAnterior = LOW;
unsigned long tiempoAnterior = 0;  // Variable para almacenar el tiempo anterior
const long intervaloDebounce = 50; // Intervalo de debounce en milisegundos

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  int lecturaBoton = digitalRead(boton);

  // Aplicar lógica de debounce
  if (lecturaBoton != estadoAnterior)
  {
    tiempoAnterior = millis();
  }
  if (millis() - tiempoAnterior > intervaloDebounce)
  {
    if (lecturaBoton != estadoBoton)
    {
      estadoBoton = lecturaBoton;

      if (estadoBoton == HIGH)
      {
        digitalWrite(ledPin, HIGH);
      }
      else
      {
        digitalWrite(ledPin, LOW);
      }
    }
  }
}