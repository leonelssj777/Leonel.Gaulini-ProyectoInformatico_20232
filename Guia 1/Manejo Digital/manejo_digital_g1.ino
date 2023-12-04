// C++ code
//

char estado = 'r';

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, INPUT);
  
  Serial.begin(9600);
}

//alfin 
//estuve dos horas haciendo este
void loop()
{
  
  if (digitalRead(3) == HIGH){
    delay(0100);
    switch (estado){
      case 'r':
        estado = 'g';
        break;
      case 'g':
        estado = 'b';
        break;
      case 'b':
        estado = 'r';
        break;
    }
  }
  
  Serial.println(estado);
  
  if (estado == 'r'){
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
  }else if (estado == 'g'){
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
  }else if (estado == 'b'){
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(2, HIGH);
  }
 
  delay(0050);
}