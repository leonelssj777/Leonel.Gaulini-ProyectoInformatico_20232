//Ejercicio 4 B
int PIR = 5; 
int led = 4; 

void setup() {
  pinMode(PIR, INPUT);
  pinMode(led, OUTPUT); 
}

void loop() {
  int movimiento = digitalRead(PIR); 

  if (movimiento == HIGH) { 
    digitalWrite(led, HIGH); 
  } else {
    digitalWrite(led, LOW); 
  }
}