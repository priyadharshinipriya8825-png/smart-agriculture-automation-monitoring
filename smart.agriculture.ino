#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void setup() {
  lcd.begin(16, 2);
    lcd.clear();
     lcd.setCursor(0, 0);
       lcd.print("analog Read");
       delay(1000);

}

void loop() {
  float t=analogRead(A0);
  t=(t/1023)*5;
  t=t*100;
  float h=analogRead(A1);
  h=(h/1023)*5;
  h=h*100;
  float m=analogRead(A0);
  m=(m/1023)*5;
  m=m*100;
  float s=analogRead(A1);
  s=(s/1023)*5;
  s=s*100;

  lcd.clear();
     lcd.setCursor(0, 0);
       
       lcd.print("t:");
       lcd.print(t);
       lcd.setCursor(8, 0);
      
       lcd.print("h:");
       lcd.print(h);
       lcd.setCursor(0, 1);
       lcd.print("m:");
       lcd.print(m);
       lcd.setCursor(8, 1);
       lcd.print("s:");
       lcd.print(s);
       delay(1000);
       
}

