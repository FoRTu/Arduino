## Display LCD de 16x2 Caracteres  [^?]

Es posible conectar un millar de dispositivos a un Arduino, uno de ellos puede ser un display LCD, como el de los antiguos teléfonos móviles o de las calculadoras. En esta practica conectaremos un LCD de 16x2 modelo **LCM1602C**, muy común y barato.

El display **LCM1602C** tiene **16 pines**, en un principio pueden parecernos muchos pero una vez visto para que vale cada uno veremos que no es para tanto. En la parte trasera del display se puede ver que función tiene cada uno de ellos, he aquí una imagen:

![] (LCM1602C.png)

Como se puede ver en la imagen, en cada extremo de la hilera de pines pone el numero correspondiente del ultimo pin. 16 en la parte izquierda y 1 en la derecha, de este modo sabemos que los pines están numerados de derecha a izquierda. En la parte de abajo se puede ver en blanco que función tiene cada uno de los pines. Veámoslo mas detalladamente:

* GND: Este es el pin que se tiene que conectar a tierra.
* VDD: Con este pin alimentamos el LCD por lo que se debe conectar a los 5v del Arduino.
* VO: Es para el contraste de la pantalla. Conectando un potenciometro será mas fácil de manipular.
* RS: Es el pin que controla la memoria del LCD e indica que registro de la memoria será el que se lee o escribe. Desde esta memoria se obtienen los datos para mostrar en pantalla, pero también se obtienen instrucciones que el controlador del LCD necesita para actuar.
* RW: Con este pin podremos escribir y leer en pantalla.
* E: Pin que habilita los registros.
* DB0--DB7: Son los pines de datos de los que se sacan los bits que llegan al registro.
* BL1 y BL2: estos dos son para alimentar la retro iluminación del display.

<br/>

###Montaje:
--
El diagrama del circuito es el siguiente:

![](Diagrama_del_Circuito.png)

<br/>


### Código:
--
Con el siguiente código lo que veremos en pantalla es un texto que pone **Hola Mundo!** en la linea superior. En la inferior veremos un contador de que ira aumentando cada segundo.

~~~
#include <LiquidCrystal.h> 

LiquidCrystal lcd(12,10,11,5,4,3,2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hola Mundo!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
}
~~~
<br/>

[^?]: Este manual ha sido creado gracias a un post en [comohacer.eu](http://comohacer.eu). Aqui esta el [original](http://comohacer.eu/como-controlar-una-pantalla-lcd-con-arduino/).

