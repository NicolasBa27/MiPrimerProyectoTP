# Sensor Digital DHT11

## Descripción

El **DHT11** es un sensor de humedad relativa y temperatura de bajo costo y media precisión. La salida suministrada es de tipo digital utilizando solamente 1 cable de datos. Utiliza un sensor capacitivo de humedad y un termistor para medir el aire circundante, y muestra los datos mediante una señal digital en el pin de datos. Es bastante simple de usar tanto en hardware como en software. El único inconveniente de este sensor es que solo se puede obtener nuevos datos una vez cada 2 segundos.

## Características

- Señal digital calibrada, asegurando alta estabilidad y fiabilidad a lo largo del tiempo.
- Integra un sensor resistivo para temperatura (termistor) y otro para humedad.
- Puede medir la humedad en un rango desde 20% hasta 90% y temperatura en el rango de 0ºC a 50ºC.
- Cada sensor DHT11 está estrictamente calibrado en laboratorio, presentando una extrema precisión en la calibración. Los coeficientes de calibración se almacenan como programas en la memoria OTP.
- El protocolo de comunicación emplea un único hilo o cable, facilitando la integración en proyectos.

## Comparación

En comparación con el **DHT22**, este sensor es menos preciso, menos exacto y funciona en un rango más pequeño de temperatura/humedad, pero su empaque es más pequeño y de menor costo.

## Especificaciones Técnicas

- **Voltaje de Operación:** 3V - 5V DC
- **Rango de medición de temperatura:** 0 a 50 °C
- **Precisión de medición de temperatura:** ±2.0 °C
- **Resolución Temperatura:** 0.1°C
- **Rango de medición de humedad:** 20% a 90% RH
- **Precisión de medición de humedad:** 4% RH
- **Resolución Humedad:** 1% RH
- **Tiempo de sensado:** 2 seg.
- **Interface:** Digital Serial

## Pines

1. **Alimentación:** +5V (VCC)
2. **Datos**
3. **No Usado (NC)**
4. **Tierra (GND)**

_Recomendamos utilizar una resistencia de 4.7K Ohm en modo Pull-up, entre el pin de datos y VCC (pregúntenos por la resistencia)._

Normalmente viene en un encapsulado de color azul con 4 pines, aunque a veces también está disponible montado sobre una placa con solo 3 pines. La distribución de las señales en los pines es la siguiente:

- Pin 1: VCC
- Pin 2: Datos
- Pin 3: NC
- Pin 4: GND
