// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1500);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1500);
  digitalWrite(3, LOW);
}