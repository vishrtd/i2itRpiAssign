#include<stdlib.h>
#include<stdint.h>
#include<unistd.h>
#include<stdio.h>
#include<wiringPi.h>

int main(void)
{
  wiringPiSetupPhys();
  uint8_t x;
  uint8_t pin,seg_7[11]= {0xFC,0x60,0xDA,0xF2,0x66,0xB6,0x3E,0xE0,0xFE,0xE6,0x01};
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(40, OUTPUT);

  while(1){
    for (x = 0; x < 11; x++){
      pin = seg_7[x];
      seg(pin);
      delay(1000);
    }
  }
}

seg(pin){
  if(pin&0x01)
    digitalWrite(40,HIGH);
  else
    digitalWrite(40,LOW);
  if((pin&0x02)>>1)
    digitalWrite(38,HIGH);
  else
    digitalWrite(38,LOW);
  if((pin&0x04)>>2)
    digitalWrite(36,HIGH);
  else
    digitalWrite(36,LOW);
  if((pin&0x08)>>3)
    digitalWrite(37,HIGH);
  else
    digitalWrite(37,LOW);
  if((pin&0x10)>>4)
    digitalWrite(35,HIGH);
  else
    digitalWrite(35,LOW);
  if((pin&0x10)>>5)
    digitalWrite(33,HIGH);
  else
    digitalWrite(33,LOW);
  if((pin&0x20)>>6)
    digitalWrite(31,HIGH);
  else
    digitalWrite(31,HIGH);
  if((pin&0x40)>>7)
    digitalWrite(29,HIGH);
  else
    digitalWrite(29,HIGH);
}
