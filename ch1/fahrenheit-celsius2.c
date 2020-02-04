#include <stdio.h>

/* print Fahrenheit-Celsius table 
    for fahrenheit = 0, 20, ..., 300 */

int main(void)
{
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahrenheit = lower;
    printf("Fahrenheit to Celsius\n\n");
    while (fahrenheit <= upper) 
    {
        celsius = (5.0/90) * (fahrenheit - 32.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}
