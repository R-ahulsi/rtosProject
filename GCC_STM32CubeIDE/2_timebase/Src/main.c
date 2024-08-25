#include "led.h"
#include "uart.h"
#include "timebase.h"

int main(void){
	led_init();
	uart_tx_init();
	timebase_init();

	int counter = 0;

    while(1){
        delay(1);
        printf("%d: A second just occurred!!\n\r", counter);
        counter++;
    }
}
