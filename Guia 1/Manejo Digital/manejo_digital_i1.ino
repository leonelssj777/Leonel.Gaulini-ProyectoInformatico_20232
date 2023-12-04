// C++ code
//

int led = 13;
int estado = 1;
int stop = 1;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  Serial.begin(9600);
}

void loop() //B)
{
  
  if (digitalRead(2) == HIGH){
    if (estado == 1){
      stop = -stop;      
      estado = 0;
    }
  }else{
    if (stop == 1){led++;}
    estado = 1;
  }
  
  if (led > 13){led = 3;}
  digitalWrite(led-1, LOW);
  digitalWrite(led, HIGH);
  
  delay(0300);
}