//Ejercicio 7

int leds[] = {2, 3, 4, 5, 6}; 
int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1}; 
int num_elementos = sizeof(secuencia) / sizeof(secuencia[0]);
int pos = 0;

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT); 
  }
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(leds[i], secuencia[pos]); 
    delay(100);
  }

  pos++; 

  if (pos >= num_elementos) {
    pos = 0; 
  }
}
