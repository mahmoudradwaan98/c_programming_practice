#include <avr/io.h>
#include <util/delay.h>
#define 	F_CPU   8000000UL
/*

  Embedded c function to blink a led for ex: port B pin 1

*/

void main(){
	
	// make pin 1 port B diection as output
	DDRB = 0x01;
	// super loop
	while(1){
		
		// make pin 1 port B op (5v)
		PORTB = 1;
		_delay_ms(500);
		// make pin 1 port B op (0v)
		PORTB = 0;
		_delay_ms(500);
	}
	
}

