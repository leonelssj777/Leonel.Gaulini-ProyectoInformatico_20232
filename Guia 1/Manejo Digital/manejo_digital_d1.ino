// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  semaforo();
  semaforo();
  semaforo();
  semaforo();
  semaforo();
  semaforo();
  semaforo();
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(5000);
}

void semaforo(){
  digitalWrite(2, HIGH);
  delay(0700);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(0700);
  digitalWrite(3, LOW);
}