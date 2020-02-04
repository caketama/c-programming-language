#include <stdio.h>

int main(void)
{
/* print Fahrenheit-Celsius table */
    int fahrenheit;
    /* prints Fahrenheit-Celsius in reverse i.e, 300 - 0 */
    for (fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20)
        printf("%3d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
}
