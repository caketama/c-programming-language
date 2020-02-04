#include <stdio.h>

/* print Celsius-Fahrenheit table for
   Celsius = 0, 20, ..., 300 */ 

int main(void)
{
    float celsius, fahrenheit;
    float lower, upper, step;

    lower = 0; /*lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    celsius = lower;
    printf("Celsius to Fahrenheit\n\n");
    while (celsius <= upper)
    {
        fahrenheit = celsius * 9.0/5.0 + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
}
