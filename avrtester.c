/* Will Oberndorfer
 * ATmegaxx8-p tester
 *
 * Directions: build a thing w/ LEDs on each pin
 * open-palm slam an atmega into a slot
 * if all the lights blink, it's good enough i guess
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= 0xFF;
	DDRC |= 0xFF;
	DDRD |= 0xFF;
	uint8_t i;
	
	while(1) {

		for (i = 0; i < 7; i++) {
			PORTB = ~(1 << i);
			PORTC = ~(1 << i);
			PORTD = ~(1 << i);
			_delay_ms(100);
		}
	}
	return 0;
}
