read a < /sys/class/gpio/gpio17/value
echo $a

if [ "$a" = 0 ]
then 
echo "it is 0"
fi
