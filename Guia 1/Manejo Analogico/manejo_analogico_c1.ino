// C++ code
//

int count = 1;
int power;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  switch (count){
    case 1: power = 255; break;
    case 2: power = 255/2; break;
    case 3: power = 25; break;
  }
  count++;
  if (count > 3){count = 1;}
  analogWrite(3, power);
  analogWrite(5, power);
  analogWrite(6, power);
  analogWrite(9, power);
  analogWrite(10, power);
  
  delay(0500);
}