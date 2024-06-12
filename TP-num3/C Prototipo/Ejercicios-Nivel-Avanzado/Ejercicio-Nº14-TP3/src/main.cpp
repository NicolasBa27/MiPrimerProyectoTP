#include <Arduino.h>
#include <DHT.h>

#define LED1 5
#define LED2 18
#define LED3 19
#define LED4 17
#define parpadeotime 500
#define DHTsensor 15

bool estado1 = LOW;
bool estado2 = LOW;
bool estado3 = LOW;
bool estado4 = LOW;

DHT dht(DHTsensor, DHT22);

// Función de interrupción para el temporizador
void IRAM_ATTR interrupcion()
{
  estado1 = !estado1;
  estado2 = !estado2;
  estado3 = !estado3;
  estado4 = !estado4;

  digitalWrite(LED1, estado1);
  digitalWrite(LED2, estado2);
  digitalWrite(LED3, estado3);
  digitalWrite(LED4, estado4);
}

void setup()
{
  Serial.begin(115200);
  dht.begin();
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  // Inicializar el temporizador
  hw_timer_t *Temporizador = timerBegin(0, 80, true);
  timerAttachInterrupt(Temporizador, &interrupcion, true);
  timerAlarmWrite(Temporizador, parpadeotime * 1000, true);
  timerAlarmEnable(Temporizador);
}

void loop()
{
  // Leer la temperatura y humedad del sensor DHT22
  float temperatura = dht.readTemperature();
  float humedad = dht.readHumidity();

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println(" %");
  delay(2000);
}