#include<wiringPi.h>

int main (void)
{
  wiringPiSetupPhys();
  pinMode(12, PWM_OUTPUT);
  int i;
  while(1){
    for(i=0;i<1025;i++){
      pwmWrite(12,i);
      delay(1);
    }
    for(i=1023;i>=0;i--){
      pwmWrite(12,i);
      delay(1);
    }
  }
  return 1;
}

