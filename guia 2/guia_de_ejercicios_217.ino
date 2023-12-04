//Ejercicio 8 B
bool multi(int numero, int multiplo) {
  if (numero % multiplo == 0) {
    return true;
  } else {
    return false; 
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int numero = 15; 
  int multiplo = 3; 

  bool resultado = multi(numero, multiplo); 

  
  Serial.begin(9600); 
  if (resultado) {
    Serial.println("El numero es multiplo");
  } else {
    Serial.println("El numero no es multiplo");
  }

  delay(1000);
}
