//Ejercicio 10 B
int pinesEntrada[] = {2, 3, 4}; 
  int cantidadPinesEntrada = sizeof(pinesEntrada) / sizeof(pinesEntrada[0]); 

  int pinesSalida[] = {5, 6, 7}; 
  int cantidadPinesSalida = sizeof(pinesSalida) / sizeof(pinesSalida[0]); 

void configurarPines(int pines[], int cantidadPines, int modo) {
  for (int i = 0; i < cantidadPines; i++) {
    pinMode(pines[i], modo); 
  }
}

void setup() {
  
  configurarPines(pinesEntrada, cantidadPinesEntrada, INPUT); 
  configurarPines(pinesSalida, cantidadPinesSalida, OUTPUT); 
}

void loop() {
  
}
