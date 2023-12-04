//Ejercicio 10
#define buzz A0
int numeros[10]; 

void setup() {
  Serial.begin(9600); 
  randomSeed(analogRead(0));  
}

void loop() {
  
  for (int i = 0; i < 10; i++) {
    numeros[i] = random(1, 11); 
  }


  for (int i = 0; i < 10; i++) {
    Serial.print("Número ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(numeros[i]);


    if (numeros[i] == 5) {
	tone(buzz, 440);
     delay(1000);
    }
    else{
     noTone(buzz); 
    }
  }

  delay(5000); 
}
