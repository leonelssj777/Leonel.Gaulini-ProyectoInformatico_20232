//Ejercicio 5

int rojo = 2; 
int azul = 5; 

int secuencia1[] = {1, 0, 0, 1, 1, 0, 1, 1};
int secuencia2[] = {0, 1, 0, 1, 0, 0, 1, 0};
int num_elementos = sizeof(secuencia1) / sizeof(secuencia1[0]);
int pos = 0;

void setup() {
  pinMode(rojo, OUTPUT); 

  pinMode(azul, OUTPUT); 
}

void loop() {
  
  int estado1 = secuencia1[pos];
  int estado2 = secuencia2[pos]; 

  digitalWrite(rojo, estado1); 
  digitalWrite(azul, estado2);

  delay(1000); 

  pos++; 

  if (pos >= num_elementos) {
    pos = 0; 
  }
}
