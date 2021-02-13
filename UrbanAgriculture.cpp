#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);
int m1=8;
int m2=9;

char text1[]="                         ANISHRAWA   ";


void setup()
 {
    lcd.init();
   lcd.backlight();
   pinMode(m1 , OUTPUT);
   pinMode(m2 , OUTPUT);
   lcd.print("----WELCOME----");
  delay(4000);
  lcd.clear();
  lcd.print("URBAN AGRICULTURE BY:-  AHBAB ADITI");
  lcd.setCursor(1, 0);
  int i=0;
  lcd.setCursor(0, 1);
  while(text1[i]!='\0')
{
  lcd.print(text1[i]);
 
   if(i>=14)
  {
           lcd.scrollDisplayLeft(); 
        }
   delay(350);
   i++;
   } 
 
  lcd.clear();
   
 
  lcd.clear();
  
  
    lcd.print("   PUMP 1 :ON");
   
    digitalWrite(m1,HIGH);
     for(int i=0;i<16;i++)
{
    lcd.setCursor(i,1);
    lcd.print("-");
    delay(1000);
}
  
    digitalWrite(m1,LOW);
  lcd.clear();
   delay(700);

  lcd.print("   PUMP 2 :ON");
   
    digitalWrite(m2,HIGH);
     for(int i=0;i<16;i++)
{
    lcd.setCursor(i,1);
    lcd.print("-");
    delay(1000);
}
    digitalWrite(m2,LOW);
  lcd.clear();
   delay(700);
   
    lcd.print("   PUMP 1 :ON");
   
    digitalWrite(m1,HIGH);
     for(int i=0;i<16;i++)
{
    lcd.setCursor(i,1);
    lcd.print("-");
    delay(1000);

}
    digitalWrite(m1,LOW);

    lcd.clear();
     delay(800);
  lcd.print("   THANKYOU");
  delay(1000);
  lcd.clear();
  
}

void loop()
{
   delay(500);
 lcd.print("URBAN AGRICULTURE BY:-  AHBAB ADITI                 ");
 lcd.setCursor(0, 1);
  int i=0;
  lcd.setCursor(0, 1);
  
  while(text1[i]!='\0')
{
   lcd.print(text1[i]);
   
  if(i>=14)
  {
          lcd.command(0x18); 
        }
   delay(400);
   i++;
   } 
  delay(3000);
  lcd.clear();
}
