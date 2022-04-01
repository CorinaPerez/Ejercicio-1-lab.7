int led = 9;
int valor = 0;
int estado= 0;

void setup() {
 pinMode(led, OUTPUT);

}

void loop() {
  estado = analogRead(A0);

  valor = map(estado,0,1023,0,255); 
  digitalWrite(led, valor);
}
