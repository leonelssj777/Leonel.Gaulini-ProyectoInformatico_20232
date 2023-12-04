// C++ code
//

int count = 1;
int r = 3;
int g = 4;
int b = 5;

void setup()
{
  pinMode(2, INPUT);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(2) == HIGH){
    delay(0200);
    count++;
    if (count > 7){
      count = 1;
    }
  }
  
  Serial.println(count);
  
  switch (count){
    case 1:
      change(r, r, r);
      break;
    case 2:
      change(g, b, b);
      break;
    case 3:
      change(g, g, g);
      break;
    case 4:
      change(r, b, b);
      break;
    case 5:
      change(b, b, b);
      break;
    case 6:
      change(r, g, b);
      break;
    case 7:
      change(r, g, g);
      break;
  }
  
  delay(0050);
}

void change(int c1, int c2, int c3){
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  
  digitalWrite(c1, HIGH);
  digitalWrite(c2, HIGH);
  digitalWrite(c3, HIGH);
}