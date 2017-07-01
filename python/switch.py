import time
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BOARD)
GPIO.setup(31,GPIO.IN, pull_up_down=GPIO.PUD_UP)
while 1:
  state = GPIO.input(31)
  print(state)
  time.sleep(0.2)
