//Ejercicio 5 B
int lanzarDado(int lados) {
  int valor = random(1, lados + 1); 
  return valor; 
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lados = 6; 
  int resultado = lanzarDado(lados); 

  Serial.begin(9600); 
  Serial.print("Lado del dado: ");
  Serial.println(resultado);

  delay(1000);
}
