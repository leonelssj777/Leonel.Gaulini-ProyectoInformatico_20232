// C++ code
//

int endurance;
int time;

void setup()
{
  pinMode(2, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  endurance = analogRead(A0);
  time = map(endurance, 0, 1023, 0, 10000);
  digitalWrite(2, HIGH);
  delay(time);
  endurance = analogRead(A0);
  time = map(endurance, 0, 1023, 0, 10000);
  digitalWrite(2, LOW);
  delay(time);
  
  delay(1);
}