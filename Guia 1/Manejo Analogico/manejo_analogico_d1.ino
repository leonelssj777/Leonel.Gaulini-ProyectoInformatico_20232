// C++ code
//

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int endurance = analogRead(A0);
  int time = map(endurance, 0, 1023, 100, 1500);
  
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(time);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(time);
}