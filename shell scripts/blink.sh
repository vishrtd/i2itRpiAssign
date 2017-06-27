#set gpio  4  and set it to output
echo 4 > /sys/class/gpio/export
sleep 1
echo out > /sys/class/gpio/gpio4/direction

#write output
while true; do
    echo 1 > /sys/class/gpio/gpio4/value
    sleep 1
    echo 0 > /sys/class/gpio/gpio4/value
    sleep 1
done

#clean up
echo 4 > /sys/class/gpio/unexport
