int analogPin = 3;  //El Pin analogico por el que vamos a leer la señal del sensor.
int ledPin = 2;     // el pin donde esta conectado el LED.
int val_sensor = 0; // Variable para guardar el valor devuleto por el sensor.

void setup()
{
  pinMode(ledPin, OUTPUT); //Ponemos el pin del LED como salida
}

void loop()
{
  val_sensor = analogRead(analogPin);  // Lectura del sensor y guardamos el valor en la variable.
  if(val_sensor > 100)                 // Si el sensor devuleve un valor mayor a 100....
  {  
    digitalWrite(ledPin,HIGH);   // Encender el LED.
  }
  else                                // Si el valor es menor a 100....
  {
     digitalWrite(ledPin,LOW);        // Apagar el LED.
  } 
}


// Codigo basado en el aparecido en el siguiente blog:
// http://arduinocostarica.blogspot.com.es/2014/09/ejemplo-7-sensor-de-movimiento-hc-sr501.html
