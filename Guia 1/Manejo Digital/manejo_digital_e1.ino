// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
 arcoirisnt(2, 3, 4);
 arcoirisnt(5, 6, 7);
}

//mostrar secuencia de color
void arcoirisnt(int r, int g, int b){
  color(r, r);
  color(g, b);
  color(g, g);
  color(r, b);
  color(b, b);
  
  //color blanco
  digitalWrite(r, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  delay(0700);
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  
  color(r, g);
}

//mostrar color
void color(int c1, int c2){
  if (c1 != c2){
    digitalWrite(c2, HIGH);
  }
  digitalWrite(c1, HIGH);
  delay(0700);
  if (c1 != c2){
    digitalWrite(c2, LOW);
  }
  digitalWrite(c1, LOW);
}