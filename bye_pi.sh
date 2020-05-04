#!/bin/bash
#UNIX shell script to shut down Raspberry Pi when a button is pressed
#must install wiringpi to run 'gpio' commands if using lite raspbian os (already installed on regular raspbian)

#export BCM pin 21 and set as input
#same pin as wiringPi pin 29 and physical pin 40
#'gpio export 21 in' would also work here 
echo 21 > /sys/class/gpio/export

#ensure direction is in and initial pin state is set to HIGH (1) by setting internal pull-up resistor
gpio -g mode 21 in
gpio -g mode 21 up

while true
do
#could also read pin state with 'gpio -g read 21'
        if [ `cat /sys/class/gpio/gpio21/value` == "0" ]; then
                echo "Powering down the raspberry pi..."
                sudo poweroff
        fi
done
