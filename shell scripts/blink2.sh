#set gpio  4  and set it to output
echo 4 > /sys/class/gpio/export
echo 26 > /sys/class/gpio/export
sleep 1
echo out > /sys/class/gpio/gpio4/direction
echo out > /sys/class/gpio/gpio26/direction


#write output
while true; do 
     echo 1 > /sys/class/gpio/gpio4/value
     echo 1 > /sys/class/gpio/gpio26/value
     sleep 1
     echo 0 > /sys/class/gpio/gpio26/value
     sleep 1
     echo 0 > /sys/class/gpio/gpio4/value
     sleep 0.01
done

#clean up
echo 4 > /sys/class/gpio/unexport
echo 26 > /sys/class/gpio/unexport
