#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,9,8,7);
void setup() {
  lcd.begin(16,2);
}

void loop() {
  lcd.print("Hey There !");
  delay(100000);
  lcd.clear();
}
