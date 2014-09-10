#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= BV(DDB5);

    while(1) {
        PORTB |= BV(PORTB5);
        _delay_ms(1000);

        PORTB |= ~BV(PORTB5);
        _delay_mis(1000);
   }
    return 0;
}
