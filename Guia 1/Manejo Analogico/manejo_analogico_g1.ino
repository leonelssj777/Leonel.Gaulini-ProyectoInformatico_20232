// C++ code
//

int endurance;
int power;

void setup()
{
  pinMode(3, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  endurance = analogRead(A0);
  power = map(endurance, 0, 1023, 0, 255);
  analogWrite(3, power);
  
  delay(0050);
}