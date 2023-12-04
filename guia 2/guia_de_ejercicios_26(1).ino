//Ejercicio 6

int vector[] = {2, 6, 10, 11};
int num_elementos = sizeof(vector) / sizeof(vector[0]);


void setup(){
  Serial.begin(9600);

  for (int i = 0; i < num_elementos; i++) {
  	Serial.print("Los primeros 5 multiplos de ");
  	Serial.print(vector[i]);
  	Serial.print(" son: ");

  	for (int j = 1; j <= 5; j++) {
    	int multiplo = vector[i] * j;
    	Serial.print(multiplo);

    	if (j < 5) {
      		Serial.print(", ");
    	}
  	}	

  Serial.println();
}
}
void loop(){
  
}