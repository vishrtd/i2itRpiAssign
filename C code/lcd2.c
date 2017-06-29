#include<wiringPi.h>
#include<lcd.h>
//use wiringpi pin numbers
#define LCD_RS 25
#define LCD_E 24
#define LCD_D4 23
#define LCD_D5 22
#define LCD_D6 21
#define LCD_D7 14

int main()
{
  int lcd;
  wiringPiSetup();
  lcd = lcdInit(2,16,4,LCD_RS,LCD_E,LCD_D4,LCD_D5,LCD_D6,LCD_D7,0,0,0,0);
  sleep(2);
  lcdClear(lcd);
  sleep(2);
  lcdPuts(lcd, "Hello World!");
  sleep(2);
  lcdClear(lcd);

  lcdPuts(lcd, "This is how you"); 
  sleep(2);
  lcdClear(lcd);  

  lcdPuts(lcd, "clear the screen"); 
  sleep(2);
  lcdClear(lcd);
}
