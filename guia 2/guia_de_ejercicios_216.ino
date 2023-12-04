//Ejercicio 7 B
int vector[] = {1, 5, 8, 6, 3}; 
int longitud = sizeof(vector) / sizeof(vector[0]);

void setup(){
  Serial.begin(9600);
}

void loop(){
	ordenarVector(vector, longitud);
  for (int i = 0; i < longitud; i++) {
    Serial.print(vector[i]);
  }
  delay(1000);
}


void ordenarVector(int vector[], int longitud) {
  for (int i = 0; i < longitud - 1; i++) {
    for (int j = 0; j < longitud - i - 1; j++) {
      if (vector[j] < vector[j + 1]) {
         int temp = vector[j];
         vector[j] = vector[j + 1];  
         vector[j + 1] = temp;  
      }
    }   
  }
  ;
}
