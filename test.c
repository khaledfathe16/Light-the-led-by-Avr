

#include<avr/io.h>
#include<avr/delay.h>

void main(void){
	DDRB = 0b11111111;

	while(1){

		for(int i=0;i<8;i++){
			PORTB = 0b00000001 << i;
			_delay_ms(1000);
			PORTB = 0b00000000;
			_delay_ms(1000);

			PORTB = 0b10000000 >> i;
						_delay_ms(1000);
						PORTB = 0b00000000;
						_delay_ms(1000);

		}

	}



}


