//백라이트
#include <LiquidCrystal_I2C.h>
int a = 0;
float b = 1.2;
char c = 'c'; 
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init(); 
  lcd.backlight();
}

void loop() {
  
  for(a=0;a<=6;a++){
    lcd.setCursor(a,0);
    lcd.print("Coding Lab");
    delay(1000);
    lcd.clear();
   }
  for(a=5;a>=0;a--){
    lcd.setCursor(a,0);
    lcd.print("Coding Lab");
    delay(1000);
    lcd.clear();
    }
  

}
