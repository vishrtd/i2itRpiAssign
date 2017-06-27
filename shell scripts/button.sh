echo 17 > /sys/class/gpio/export
sleep 1
echo in > /sys/class/gpio/gpio17/direction

#read input
while true; do
    cat /sys/class/gpio/gpio17/value
    sleep 0.5
done

#clean up
echo 17 > /sys/class/gpio/unexport
