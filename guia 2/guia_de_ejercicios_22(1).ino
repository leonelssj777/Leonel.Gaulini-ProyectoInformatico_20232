//Ejercicio 2

int vector[] = { 10, 4, 2 };
int num_elementos = sizeof(vector) / sizeof(vector[0]);

void setup(){
  Serial.begin(9600);
for (int i = 0; i < num_elementos - 1; i++) {
  for (int j = 0; j < num_elementos - i - 1; j++) {
    if (vector[j] > vector[j + 1]) {
      int orden = vector[j];
      vector[j] = vector[j + 1];
      vector[j + 1] = orden;
    }
  }
}
  for (int i = 0; i < num_elementos; i++) {
  Serial.print(vector[i]);
  if (i < num_elementos - 1) {
    Serial.print(", ");
  }
}
}

void loop(){
  
}
