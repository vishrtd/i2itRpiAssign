#include<stdlib.h>
#include<stdint.h>
#include<unistd.h>
#include<stdio.h>
#include<wiringPi.h>


int LENGTH = 5;

int main(void)
{
  wiringPiSetupPhys();
  uint8_t x;
  //uint8_t pin,seg_4[9]= {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08};
  uint8_t pin,seg_4[5]= {0x00,0x01,0x02,0x04,0x08};
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(38, OUTPUT);

  while(1){
    for (x = 0; x < LENGTH; x++){
      pin = seg_4[x];
      seg(pin);
      delay(1000);
    }
  }
}

seg(pin){
  if(pin&0x01)
    digitalWrite(29,HIGH);
  else
    digitalWrite(29,LOW);
  if((pin&0x02)>>1)
    digitalWrite(31,HIGH);
  else
    digitalWrite(31,LOW);
  if((pin&0x04)>>2)
    digitalWrite(36,HIGH);
  else
    digitalWrite(36,LOW);
  if((pin&0x08)>>3)
    digitalWrite(38,HIGH);
  else
    digitalWrite(38,LOW);
}
