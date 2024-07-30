#include <Servo.h>

// Criar objeto Servo para controlar o servo motor
Servo myServo;

// Definir o pino do botão
const int buttonPin = 7;

// Variável para armazenar o estado do botão
int buttonState = 0;

void setup() {
  myServo.attach(2);
  pinMode(buttonPin, INPUT);
  myServo.write(0);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    myServo.write(180);
  } else {
    myServo.write(0);
  }
}