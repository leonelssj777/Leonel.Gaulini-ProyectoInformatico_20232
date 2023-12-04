// C++ code
//

int estado = 1;
int active = 1;
int change = 2;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{ 
  int endurance = analogRead(A0);
  int time = map(endurance, 0, 1023, 50, 1000);
  
  if (digitalRead(2) == HIGH){
    if (estado == 1){
      active = -active;
      estado = 0;}
  }else{
    if (active == 1){
      digitalWrite(change, HIGH);
      change++;
      if (change > 12){change = 2;}
      delay(time);
      reset();}
    estado = 1;}
  
  delay(0050);
}
  
void reset(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
}
