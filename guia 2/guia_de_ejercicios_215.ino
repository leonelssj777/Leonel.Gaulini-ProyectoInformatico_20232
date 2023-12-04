//Ejercicio 6 B
int pines[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; 
int cantidadPines = sizeof(pines) / sizeof(pines[0]); 

void setup() {

  for (int i = 0; i < cantidadPines; i++) {
     pinMode(pines[i], OUTPUT); 
  }
}

void loop() {
  encenderPines(pines, cantidadPines);
  delay(1000); 

  for (int i = 0; i < cantidadPines; i++) {
    digitalWrite(pines[i], LOW); 
  }

  delay(1000);
}
void encenderPines(int pines[], int cantidadPines) {
  for (int i = 0; i < cantidadPines; i++) {
    digitalWrite(pines[i], HIGH); 
  }
}