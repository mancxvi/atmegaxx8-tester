/* Will Oberndorfer
 * ATmegaxx8-p tester
 *
 * Directions: build a thing w/ LEDs on each pin
 * open-palm slam an atmega into the slot
 * if all the lights blink, it's good enough i guess
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0xFF;
	DDRC |= 0xFF;
	DDRD |= 0xFF;
	
	while(1) {
		PORTB = 0x55;
		PORTC = 0x55;
		PORTD = 0x55;
		_delay_ms(500);
		PORTB = 0xAA;
		PORTC = 0xAA;
		PORTD = 0xAA;
		_delay_ms(500);
	}
	return 0;
}
