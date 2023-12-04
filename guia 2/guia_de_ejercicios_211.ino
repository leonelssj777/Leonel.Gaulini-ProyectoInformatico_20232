//Ejercicio 2 B

#define trig1 A1
#define echo1 A0

void setup(){
  Serial.begin(9600);
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT); 
}
void loop()
{
 detectar(); 
}

void detectar(){
 digitalWrite(trig1, LOW);
  delayMicroseconds(5);
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  float tiempo = pulseIn( echo1 , HIGH );
  float distancia = tiempo / 58.2;
  Serial.print("Arriba: ");
  Serial.println(distancia); 
}