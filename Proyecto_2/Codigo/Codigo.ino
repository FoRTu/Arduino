int boton = 2;
int led = 13;

void setup ()
{
  Serial.begin(9600);
  pinMode(boton, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop()
{
 int valor = digitalRead(boton);
 Serial.println(valor, DEC);
 
 if (valor == HIGH)
 {
   digitalWrite(led, LOW);
 }
 else
 {
   digitalWrite(led, HIGH);
 } 
 
}
