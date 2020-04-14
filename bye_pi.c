//C code to shut down the raspberry pi when a button is pressed
//uses wiringPi library and wiringPi pin numbers

#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

int main(void) {
        wiringPiSetup();
        
        // wiringPi pin 29, physical pin 40, BCM pin 21 
        int button = 29;

        //set pin 29 as input
        pinMode(button, INPUT);

        //wait for button press
        while (1) {
                if (digitalRead(button) == LOW) {
                        printf("Powering down the raspberry pi...\n");
                        system("sudo poweroff");
                }
        }
        return 0;
}
