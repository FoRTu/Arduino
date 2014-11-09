int boton = 2;
int led = 13;

void setup ()
{
  pinMode(boton, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
 int valor = digitalRead(boton); 
 if (valor == HIGH)
 {
   digitalWrite(led, LOW);
 }
 else
 {
   digitalWrite(led, HIGH);
 } 
 
}
