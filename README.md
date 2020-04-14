# Raspberry Pi Shutdown Button
Add a physical shutdown button to a Raspberry Pi. Choose from options implemented in different languages.

# Requirements
Hardware Requirements
- 1 Raspberry Pi 
- 1 normally-open momentary pushbutton switch
- 2 jumper wires with female connector (only need if not already attached to switch)

If you need to connect the pushbutton switch with the jumper wires, you will also need a soldering iron and solder.

Software Requirements
- For shut-your-pi.py: <br/>
  ```sudo apt install python3-gpiozero```
- For shut-your-pi.c: <br/>
  ```sudo apt-get install wiringpi```

**NOTE:** The project was tested on a Raspberry Pi 3 Model B running the Raspbian Buster Lite OS.

# Setup
If the switch did not already come with jumper wires attached, solder two jumper wires to the switch. The two jumper wires should have female connectors on one end, so they can be attached to the GPIO pins on the Raspberry Pi. 

(IMAGE HERE)

## GPIO Pins
There is more than one pin cominbation available for connecting the pushbutton switch. The code in this project uses physical pins 39 and 40, so unless you modify the code accordingly, stick with those pins. Keep in mind that the physical pin numbers are different from the BCM pin numbers, which are also different from the wiringPi pin numbers. The best way to visualize the relationship between the three different numbering systems is to use the `gpio readall` command. The `pinout` command shows each pins' physical orientation on the board as well as other useful information.

(gpio readall command image)
(pinout command image)

# Usage

# Similar Projects




