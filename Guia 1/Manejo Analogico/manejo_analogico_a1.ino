// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int endurance = analogRead(A0);
  int power = map(endurance, 0, 1023, 0, 255);
  
  if (power == 0){}
  else if (power < 255/3){power = 255/4;}
  else if (power < 255*2/3){power = 255/2;}
  else if (power < 255){power = 255*3/4;}

  analogWrite(3, power);
  delay(0050);
}