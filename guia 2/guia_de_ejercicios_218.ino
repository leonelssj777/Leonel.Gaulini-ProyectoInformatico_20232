//Ejercicio 9 B
int numeros[5];
void completar(int vector[], int longitud) {
  for (int i = 0; i < longitud; i++) {
    vector[i] = random(11) * 10; 
  }
}

void setup() {
 
  Serial.begin(9600);
  randomSeed(analogRead(A0));

  
  completar(numeros, 5);
  
  for (int i = 0; i < 5; i++) {
    Serial.println(numeros[i]);
    
  }
}

void loop() {
 
}

