#include "stdio.h"
#include "wiringPi.h"
int main(void)
{
int pin =7;
if(wiringPiSetup()==-1)
{
 return 0;
}
pinMode(pin,OUTPUT);//on indique que le GPIO7 est en mode sortie
while(1)
{
 digitalWrite(pin,0);//la valeur est définie à LOW(3.3v)

 

}
return 0;
}