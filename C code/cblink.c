#include <wiringPi.h>
int main (void)
{
  wiringPiSetupPhys ();
  pinMode(12, OUTPUT);
  while(1)
  {
    digitalWrite(12,HIGH); delay (500);
    digitalWrite(12, LOW); delay (500);
  }
}
