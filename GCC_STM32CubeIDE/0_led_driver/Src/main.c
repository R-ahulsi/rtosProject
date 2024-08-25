#include "led.h"

int main(void)
{
	led_init();

	// LED will blink 10 times
	for(int i = 0; i < 9; i++){
		led_on();
		for(int i = 0; i < 1000000; i++){}
		led_off();
		for(int i = 0; i < 1000000; i++){}
	}

}
