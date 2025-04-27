/* Pilotare un LCD 16x2 con Arduino
Collegamenti dell'LCD per funzionamento a 4 bit:
VSS -> GND
VDD -> +5v
V0 -> al potenziometro
RS -> Arduino D12
R/W -> GND
E -> Arduino D11
D0 -> N/C
D1 -> N/C
D2 -> N/C
D3 -> N/C
D4 -> Arduino D2
D5 -> Arduino D3
D6 -> Arduino D4
D7 -> Arduino D5
A -> Arduino A0
K -> GND
*/
 
#include <LiquidCrystal.h>;
 
// Creiamo l'oggetto "lcd" inizializzandolo come richiesto dalla libreria, ovvero:
// LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 2, 3, 4, 5);
 
void setup(){ 
  //pin retroilluminazione
  pinMode(A0, OUTPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Schermo CristLiq");
  lcd.setCursor(0, 1);
  lcd.print("0123456789123456");
  digitalWrite(A0, HIGH);
}
 
void loop() {}