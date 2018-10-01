#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "wiringPi.h"

int main( )
{
    if(wiringPiSetup() == -1){
        printf("%s \n", "Failed to setup wiringPi");
    }
    
   	pinMode(11, INPUT); // set pin 1 as input

    int val =0;
    
    while(1) {
        // read the value
        // 1 means no movement
        // 0 means that something is moving
        val = digitalRead(11);
        printf("%s: %i\n", "sensor", val );
        usleep(100000); // 10fps
    }
}
