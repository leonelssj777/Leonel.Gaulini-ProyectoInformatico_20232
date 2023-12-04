//Ejercicio 4
int ledPin = 8; 
int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};
int num_elementos = sizeof(secuencia) / sizeof(secuencia[0]);
int pos = 0;

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  int estado = secuencia[pos]; 
  digitalWrite(ledPin, estado);
  delay(1000); 
  pos++; 
  
  if (pos >= num_elementos) {
    pos = 0; 
  }
}
