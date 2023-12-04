// C++ code
//

int estado = 1;
int power;
int endurance;
int r;
int g;
int b;
int active = 1;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  r = 0;
  g = 0;
  b = 0;
  endurance = analogRead(A0);
  
  if (digitalRead(2) == HIGH){
    if (estado == 1){
      active = -active;
      estado = 0;}
  }else{
    if (active == 1){
      power = map(endurance, 0, 1023, 0, 255);

      if (power == 0){r = 255;}
      else if (power <= 255/3){
        r = map(power, 0, 255/3, 255, 0);
        g = map(power, 0, 255/3, 0, 255);
      }else if (power <= 255*2/3){
        g = map(power, 255/3, 255*2/3, 255, 0);
        b = map(power, 255/3, 255*2/3, 0, 255);
      }else{
        b = map(power, 255*2/3, 255, 255, 0);
        r = map(power, 255*2/3, 255, 0, 255);}}
    
    estado = 1;}
  
  analogWrite(3, r);
  analogWrite(5, g);
  analogWrite(6, b);
  
  delay(0050);
}
