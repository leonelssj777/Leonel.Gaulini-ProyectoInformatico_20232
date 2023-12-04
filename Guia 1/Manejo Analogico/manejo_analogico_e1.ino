// C++ code
//

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int red = analogRead(A0);
  int green = analogRead(A1);
  int blue = analogRead(A2);
  int r = map(red, 0, 1023, 0, 255);
  int g = map(green, 0, 1023, 0, 255);
  int b = map(blue, 0, 1023, 0, 255);
  
  analogWrite(3, r);
  analogWrite(5, g);
  analogWrite(6, b);
  
  delay(0050);
}