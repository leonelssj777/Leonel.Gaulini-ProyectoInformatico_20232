//Ejercicio 8

int led = 3; 
int boton = 2; 
int secuencia[5]; 
int pos = 0; 

void setup() {
  pinMode(led, OUTPUT); 
  pinMode(boton, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(led, HIGH); 
  Serial.println("Presiona el boton");

  while (digitalRead(boton) == LOW) {
   
  }

  delay(10); 

  if (digitalRead(boton) == HIGH) {
    secuencia[pos] = 1; 
  } else {
    secuencia[pos] = 0;
  }

  digitalWrite(led, LOW); 
  Serial.println("Solta el boton");

  while (digitalRead(boton) == LOW) {

  }

  delay(10); 

  pos++; 

  if (pos >= 5) {
    
    Serial.println("El vector es:");
    for (int i = 0; i < 5; i++) {
      Serial.print(secuencia[i]);
      Serial.print(" ");
    }
    Serial.println();

   
    memset(secuencia, 0, sizeof(secuencia));
    pos = 0;
  }
}
