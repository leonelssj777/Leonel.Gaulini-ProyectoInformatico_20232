//Ejercicio 3 B
#include <LiquidCrystal.h>

LiquidCrystal lcd( 7, 6, 2 , 3 , 4 , 5 );  

void setup() {
  lcd.begin(16, 2); 
}

void loop() {
  
  mostrarMensajeBienvenida();
   delay(2000);
  
mostrarMensajeInicioJuego();
  delay(2000);
  mostrarMensajeFinJuego();
  
  delay(2000);
  mostrarPuntuacion();
  delay(2000);
}

void mostrarMensajeBienvenida() {
  lcd.clear(); 
  lcd.setCursor(0, 0); 
  lcd.print("Bienvenido!");
}

void mostrarMensajeInicioJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Inicio de juego");
}

void mostrarMensajeFinJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin de juego");
}

void mostrarPuntuacion() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Puntuacion: ");
  int puntaje = generarPuntajeAleatorio();
  lcd.setCursor(0, 1);
  lcd.print(puntaje);
}

int generarPuntajeAleatorio() {
  return random(0, 100); 
}
