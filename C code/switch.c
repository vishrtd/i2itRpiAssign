#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <wiringPi.h>
int main (void)
{
  wiringPiSetupPhys();
  pinMode (16, OUTPUT);
  pullUpDnControl(16, PUD_UP);
  while(1)
  {
    int val = digitalRead(16);
    printf("%d\n",val);
  }
}
