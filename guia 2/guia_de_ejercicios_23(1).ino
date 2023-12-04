//Ejercicio 3

float vector[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int num_elementos = sizeof(vector) / sizeof(vector[0]);

float maximo = vector[0];

void setup(){
Serial.begin(9600);
for (int i = 1; i < num_elementos; i++) {
  if (vector[i] > maximo) {
    maximo = vector[i];
  }
}

Serial.print("El numero mas grande del vector es: ");
Serial.println(maximo);
}

void loop(){
}