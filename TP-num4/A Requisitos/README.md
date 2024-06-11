# REQUISITOS PARA EL TRABAJO PRACTICO Nº 4.

**Objetivos**

**• Afianzar fundamentos de programación en C/C++**  
**• Afianzar fundamentos de herramientas de desarrollo (simuladores, ide)**  
**• Afianzar fundamentos de sensores y actuadores básicos.**

**Desarrollo**

**Ejercicio 1: Manejo de Entradas Digitales y Control de Relés**

**Objetivos:**

1. Configurar y leer entradas digitales en Arduino.

2. Enviar y recibir datos a través del monitor serie.

3. Controlar relés como salidas digitales basados en la entrada de
   datos del monitor serie.
4. Implementar un sistema de control básico en Proteus utilizando
   botones y relés.

**Desarrollo:**

• Configura el Arduino para leer los estados de dos botones
conectados a dos pines digitales.

• Establece una comunicación serial para recibir comandos que
controlen un grupo de relés.

• Los relés deberán estar conectados a otros pines digitales y
controlarán luces LED simuladas en Proteus.

• Programa el Arduino para que, al recibir ciertos comandos a través
del monitor serie, active o desactive los relés correspondientes.

\*\*Ejercicio 2: Lectura de Sensores Resistivos

**Objetivos:**

1. Aprender a leer valores analógicos de un potenciómetro.

2. Convertir valores analógicos en datos digitales comprensibles.

3. Visualizar y monitorear cambios en el valor del potenciómetro a
   través del monitor serie.

4. Simular la conexión y lectura de un sensor resistivo en Proteus.

**Desarrollo:**

• Conecta un potenciómetro a un pin analógico del Arduino.

• Utiliza la función analogRead() para leer los valores del
potenciómetro.

• Envía los valores leídos al monitor serie para visualizarlos.

• Implementa un sistema de visualización en Proteus para
representar los valores leídos del potenciómetro.

**Ejercicio 3: Interacción con un Sensor Digital (DHT11)**

**Objetivos:**

1. Integrar y configurar el sensor de temperatura y humedad DHT11
   con Arduino.

2. Leer datos digitales de un sensor ambiental.

3. Interpretar y procesar datos de temperatura y humedad.

4. Mostrar los datos procesados en el monitor serie y simular esta
   configuración en Proteus.

**Desarrollo:**

• Conecta el sensor DHT11 a un pin digital en el Arduino.

• Utiliza una biblioteca adecuada para leer los datos de temperatura
y humedad del sensor.

• Programa el Arduino para enviar estos datos al monitor serie,
mostrando la temperatura y la humedad ambiental.

• Configura el simulador Proteus para modelar esta interacción,
utilizando representaciones visuales de los datos recibidos del
DHT11.

**Profesor→** Gonzalo Vera.  
**Alumno→** Nicolás Barrionuevo.
