
int ledPin = 3;

void setup()
{                                                                                                                                                                                                                                                                             
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int valor_analog = analogRead(A0);
  int valor_luz = int((float(valor_analog) * 255.0) / 1023.0);
  analogWrite(ledPin, valor_luz);
}

