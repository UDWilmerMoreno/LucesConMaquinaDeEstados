#include <Arduino.h>

#define Rojo 16
#define Verde 5
#define Azul 4
int retardo = 2000;
char datoserial;
int caso;

void setup()
{
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
  Serial.begin(9600);
}

void ColorNegro()
{
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, LOW);
}
void ColorAzul()
{
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, HIGH);
}
void ColorAguaMarina()
{
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, HIGH);
}
void ColorVerde()
{
  digitalWrite(Rojo, LOW);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, LOW);
}
void ColorAmarillo()
{
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, LOW);
}
void ColorRojo()
{
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, LOW);
}
void ColorMorado()
{
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, LOW);
  digitalWrite(Azul, HIGH);
}
void ColorBlanco()
{
  digitalWrite(Rojo, HIGH);
  digitalWrite(Verde, HIGH);
  digitalWrite(Azul, HIGH);
}

void loop()
{
  if (Serial.available() > 0)
  {
    datoserial = Serial.read();
    switch (datoserial)
    {
    case '0':
      caso = 0;
      break;
    case '1':
      caso = 1;
      break;
    case '2':
      caso = 2;
      break;
    case '3':
      caso = 3;
      break;
    case '4':
      caso = 4;
      break;
    case '5':
      caso = 5;
      break;
    case '6':
      caso = 6;
      break;
    case '7':
      caso = 7;
      break;
    case 'q':
      caso = 8;
      break;
    case 'w':
      caso = 9;
      break;
    case 'e':
      caso = 10;
      break;
    case 'r':
      caso = 11;
      break;
    case 't':
      caso = 12;
      break;
    case 'y':
      caso = 13;
      break;
    case 'u':
      caso = 14;
      break;
    case 'i':
      caso = 15;
      break;
    default:
      Serial.println("Caracter no reconocido");
      break;
    }
  }

  switch (caso)
  {
  case 0:
    ColorNegro();
    delay(retardo);
    caso = 1;
    break;
  case 1:
    ColorAzul();
    delay(retardo);
    caso = 2;
    break;
  case 2:
    ColorAguaMarina();
    delay(retardo);
    caso = 3;
    break;
  case 3:
    ColorVerde();
    delay(retardo);
    caso = 4;
    break;
  case 4:
    ColorAmarillo();
    delay(retardo);
    caso = 5;
    break;
  case 5:
    ColorRojo();
    delay(retardo);
    caso = 6;
    break;
  case 6:
    ColorMorado();
    delay(retardo);
    caso = 7;
    break;
  case 7:
    ColorBlanco();
    delay(retardo);
    caso = 0;
    break;
  case 8:
    ColorNegro();
    break;
  case 9:
    ColorAzul();
    break;
  case 10:
    ColorAguaMarina();
    break;
  case 11:
    ColorVerde();
    break;
  case 12:
    ColorAmarillo();
    break;
  case 13:
    ColorRojo();
    break;
  case 14:
    ColorMorado();
    break;
  case 15:
    ColorBlanco();
    break;
  default:
    ColorNegro();
    Serial.println("No hay caso");
    delay(retardo);
    break;
  }
}