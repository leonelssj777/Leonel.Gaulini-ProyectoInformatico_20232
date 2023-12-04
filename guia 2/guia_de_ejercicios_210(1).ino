//Ejercicio 1 B
 
#define b1 2
#define b2 3
#define b3 4
#define buzz A0

void setup(){
 Serial.begin(9600);
 pinMode(b1, INPUT); 
 pinMode(b3, INPUT); 
 pinMode(b2, INPUT); 
 pinMode(buzz, OUTPUT); 

}

void loop(){
  if (digitalRead(b1) == HIGH){
   melodia1(); 
    delay(1000);
  }
  else{
  }
  if (digitalRead(b2) == HIGH){
   melodia2(); 
    delay(1000);
  }
  else{
  }
  if (digitalRead(b3) == HIGH){
   melodia3(); 
    delay(1000);
  }
  else{
  }
}



void melodia1(){
 tone(buzz, 440);
  delay(1000);
  tone(buzz, 900);
  delay(200);
  tone(buzz, 440);
  delay(1000);
  tone(buzz, 900);
  delay(200);
}

void melodia2(){
 tone(buzz, 200);
  delay(1000);
  tone(buzz,250);
  delay(200);
  tone(buzz,400);
  delay(1000);
  tone(buzz, 300);
  delay(200);
}

void melodia3(){
 tone(buzz, 600);
  delay(1000);
  tone(buzz,900);
  delay(200);
  tone(buzz, 100);
  delay(1000);
  tone(buzz,900);
  delay(440);
}




