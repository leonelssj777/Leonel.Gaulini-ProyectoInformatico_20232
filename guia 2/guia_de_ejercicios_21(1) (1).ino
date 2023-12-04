//Ejercicio 1 de vectores
int vector[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
int num_elementos = sizeof(vector) / sizeof(vector[0]);
int suma = 0;

void setup(){
 Serial.begin(9600);
for (int i = 0; i < num_elementos; i++) {
  suma += vector[i];
}

float media = suma / num_elementos;
Serial.print(media);
}
void loop(){



}