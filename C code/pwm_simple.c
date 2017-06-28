#include<wiringPi.h>
int DUTYCYCLE = 1024;
int main (void)
{
  wiringPiSetupPhys();
  pinMode(12, PWM_OUTPUT);
  //pinMode(40, OUTPUT);
  while(1)
 {
    pwmWrite(12,DUTYCYCLE);
   // digitalWrite(40,HIGH);
 }
}

