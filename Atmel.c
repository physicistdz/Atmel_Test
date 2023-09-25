#define F_CPU 8000000UL
#ifndef __AVR_ATmega8__
    #define __AVR_ATmega8__
#endif

#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
//connecting led on port B
DDRC |= 1 << PIN5;
while(1)
{

_delay_ms(1000);
PORTC ^= 1<<PIN5;
_delay_ms(1000);

}
return 0;
}