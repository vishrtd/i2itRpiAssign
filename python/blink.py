import time
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12,GPIO.OUT)
while 1:
  GPIO.output(12,True)
  time.sleep(1)
  GPIO.output(12,False)
  time.sleep(1)
