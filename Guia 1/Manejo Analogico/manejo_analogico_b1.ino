// C++ code
//

int count = 11;
int aut;
int post;
int power;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  
  Serial.begin(9600);
}

//por alguna razon no encienden las luces
//del 11, 8 y 7
//es un problema de los pines
//o de la pc
void loop()
{
  aut = 255;
  switch (count){
    case 11: power = aut/10; break;
    case 10: power = aut*2/10; break;
    case 9: power = aut*3/10; break;
    case 8: power = aut*4/10; break;
    case 7: power = aut*5/10; break;
    case 6: power = aut*6/10; break;
    case 5: power = aut*7/10; break;
    case 4: power = aut*8/10; break;
    case 3: power = aut*9/10; break;
    case 2: power = aut; break;
  }
  
  reset();
  analogWrite(count, power);
  count--;
  if (count < 2){count = 11;}
  
  delay(0300);
}

void reset(){
  analogWrite(2, 0);
  analogWrite(3, 0);
  analogWrite(4, 0);
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(7, 0);
  analogWrite(8, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
}