// C++ code
//



void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  sonido();
  luces();
  
  delay(0050);
}

int power = 125;
int e = 3;
void sonido(){
  if (power < 40 or power > 125){e = -e;}
  
  power += e;
  analogWrite(3, power);
}

void luces(){
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(0050);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(0050);
}