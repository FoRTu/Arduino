int boton = 2;

void setup ()
{
 Serial.begin(9600); 
 pinMode(boton, INPUT_PULLUP);
}

void loop()
{
  int valor = digitalRead(boton);
  Serial.println(valor, DEC);
}
