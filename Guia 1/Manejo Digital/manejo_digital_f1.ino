// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  
  if (digitalRead(3) == HIGH){
    delay(0500);
    digitalWrite(2, LOW);
    delay(0500);
  }
  
}