#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//seta LCD
const int LDR = 0;
int ValorLido = 0;
const int NTC = 1;
int ValorLido2 = 0;
const int LDR2 = 2;
int ValorLido3 = 0;
const int ledpin = 10;//define pino de saida analogica

void setup() {
  pinMode(ledpin, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Temperatura");//adiciona label para indicar temperatura
  lcd.setCursor(0, 1);
  lcd.print("Luminosidade");//adiciona label para indicar a luminosidade
}

void loop() {
  ValorLido = analogRead(LDR);//ler valor do NTR
  ValorLido2 = analogRead(NTC);//ler valor do NTC
  ValorLido3 = analogRead(LDR2);//Ler valor do LDR do sensor de presença
  ValorLido = ValorLido/10;
  ValorLido2 = (ValorLido2 -246)/11;//calcula temperatura com base na leitura do AD
  ValorLido3 = ValorLido3/10;
  lcd.setCursor(13, 1);//seta curso no LCD
  lcd.print(ValorLido);
  lcd.setCursor(13, 0);
  lcd.print(ValorLido2);//toma o valor lido
  if (ValorLido3 < 80){
  digitalWrite(ledpin, HIGH);
}
else{
     digitalWrite(ledpin, LOW);
}

}
