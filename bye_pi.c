//C code to shut down the raspberry pi when a button is pressed
//must install wiringpi if using lite raspbian os (already installed on regular raspbian)

#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

int main(void) {

        //wiringPi pin 29, physical pin 40, BCM pin 21 
        const int button = 29;  

        //initialize wiringPi
        if (wiringPiSetup() == -1) {
                exit(1);
        }               

        //set pin 29 as input
        pinMode(button, INPUT);

        //initialize pin state to HIGH
        system("gpio mode 29 up");

        //wait for button press
        while (1) {
                if (digitalRead(button) == LOW) {
                        printf("Powering down the raspberry pi...\n");
                        system("sudo poweroff");
                }
        }
        return 0;
}
