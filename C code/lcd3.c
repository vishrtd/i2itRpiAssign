#include<wiringPi.h>
#include<lcd.h>
//use wiringpi pin numbers
#define LCD_RS 37
#define LCD_E 35
#define LCD_D4 33
#define LCD_D5 31
#define LCD_D6 29
#define LCD_D7 23

int main()
{
  int lcd;
  wiringPiSetupPhys();
  lcd = lcdInit(2,16,4,LCD_RS,LCD_E,LCD_D4,LCD_D5,LCD_D6,LCD_D7,0,0,0,0);
  sleep(2);
  lcdClear(lcd);
  sleep(2);
  lcdPuts(lcd, "Hello World!");
}
