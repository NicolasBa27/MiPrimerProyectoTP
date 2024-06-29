## ¿Qué es un relé y para qué sirve?

Un **relé** es un aparato eléctrico que funciona como un interruptor, abriendo y cerrando el paso de la corriente eléctrica de manera electromagnética. Permite abrir o cerrar contactos mediante un electroimán, por lo que también se le llama relé electromagnético o relevador.

El relé tiene dos contactos, uno abierto (NO) y otro cerrado (NC). Cuando se aplica corriente a la bobina, se crea un campo magnético que mueve los contactos, cambiando su posición. Este proceso permite controlar un circuito de mayor potencia usando una señal de menor potencia.

## Tipos de Relés

- **Relés Electromecánicos Convencionales:** Utilizan un electroimán para mover una armadura que cierra los contactos. Pueden ser NA (Normalmente Abierto) o NC (Normalmente Cerrado).
- **Relés de Núcleo Móvil:** Utilizan un émbolo en lugar de una armadura, lo que les permite manejar altas corrientes. Son comunes en aplicaciones automotrices.
- **Relés Polarizados:** Contienen una armadura con un imán permanente que puede girar dentro de los polos de un electroimán, cerrando o abriendo los contactos según la polaridad.
- **Relés Tipo Reed:** Están formados por una ampolla de vidrio con contactos internos que se cierran al excitar una bobina externa. También pueden activarse acercando un imán.
- **Relés de Estado Sólido:** Utilizan un circuito electrónico interno para abrir y cerrar los contactos, en lugar de una bobina.

## Numeración de los Terminales

Los terminales de un relé siguen la norma DIN 72552, que asigna códigos numéricos a varios tipos de terminales eléctricos. En un mini relé de 4 o 5 pines, la numeración típica es:

- **85:** Bobina
- **86:** Bobina
- **87:** Normalmente Abierto (NO)
- **87a:** Normalmente Cerrado (NC) (no presente en relés de 4 pines)
- **30:** Conexión común a terminales NA y NC

Para un relé con un diodo integrado, el terminal 86 debe conectarse a +12V y el 85 a tierra para evitar daños al diodo.

## Tipos de Relés por Funcionamiento

- **Abrir y Cerrar:** Conexión entre los terminales 30 y 87 que se cierra al activar el relé.
- **Relé de Cambio:** Tiene dos circuitos (87 y 87a) conectados a un terminal común (30). En reposo, 87a está conectado a 30; al energizar el relé, 87 se conecta a 30.
- **Relé con Doble Salida:** El terminal 87 está vinculado al 87b, proporcionando salidas dobles desde un único contacto NA.
- **Relé con 2 Contactos:** La armadura conecta los terminales 87 y 87b simultáneamente al energizar la bobina.
- **Relé con Fusible Integrado:** Un fusible entre el terminal 30 y el contacto NA proporciona protección para el circuito de alta corriente.
- **Relé con Diodo a Través de la Bobina:** Absorbe picos de alto voltaje creados al desenergizar la bobina, protegiendo dispositivos electrónicos sensibles.
- **Relé con Resistencia a Través de la Bobina:** Realiza una función similar al diodo, pero permite una pequeña corriente y es menos efectivo en la supresión de picos de voltaje.
