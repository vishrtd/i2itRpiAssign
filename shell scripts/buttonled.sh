#set button to input
echo 17 > /sys/class/gpio/export
#set led to output
echo 4 > /sys/class/gpio/export
echo out > /sys/class/gpio/gpio4/direction
sleep 1 
while true; do
  read a < /sys/class/gpio/gpio17/value
  if [ $a  = 1 ]
  then 
    echo 1  > /sys/class/gpio/gpio4/value
  else 
    echo 0 > /sys/class/gpio/gpio4/value
  fi
done
