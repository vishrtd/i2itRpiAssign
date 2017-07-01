import RPi.GPIO as GPIO
import time

ONE = 0xFC
TWO = 0x60
THREE = 0xDA
FOUR = 0xF2
FIVE = 0x66
SIX = 0xB6

V = 0x38
I = 0x20
S = 0xB6
H = 0x2E
A = 0xF2
L = 0x66
DOT = 0xB6


#seg_7 = [0xFC,0x60,0xDA,0xF2,0x66,0xB6]
seg_7 = [V,I,S,H,A,L,DOT]
GPIO.setmode(GPIO.BOARD)
GPIO.setup(29,GPIO.OUT)
GPIO.setup(31,GPIO.OUT)
GPIO.setup(33,GPIO.OUT)
GPIO.setup(35,GPIO.OUT)
GPIO.setup(37,GPIO.OUT)
GPIO.setup(36,GPIO.OUT)
GPIO.setup(38,GPIO.OUT)
GPIO.setup(40,GPIO.OUT)

def PORT(pin):
  if (pin&0x01 == 0x01):
    GPIO.output(40,True)
  else:
    GPIO.output(40,False)
  if (pin&0x02 == 0x02):
    GPIO.output(38,True)
  else:
    GPIO.output(38,False)
  if (pin&0x04 == 0x04):
    GPIO.output(36,True)
  else:
    GPIO.output(36,False)
  if (pin&0x08 == 0x08):
    GPIO.output(37,True)
  else:
    GPIO.output(37,False)
  if (pin&0x10 == 0x10):
    GPIO.output(35,True)
  else:
    GPIO.output(35,False)
  if (pin&0x20 == 0x20):
    GPIO.output(33,True)
  else:
    GPIO.output(33,False)
  if (pin&0x40 == 0x40):
    GPIO.output(31,True)
  else:
    GPIO.output(31,False)
  if (pin&0x80 == 0x80):
    GPIO.output(29,True)
  else:
    GPIO.output(29,False)


while 1:
    for x in range(len(seg_7)):
      pin = seg_7[x]
      PORT(pin);
      time.sleep(1)
