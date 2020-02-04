#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit of table */
#define STEP 20 /* step size */

int main(void)
{
/* print Fahrenheit-Celsius table */
    int fahrenheit;
    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
        printf("%3d %6.1f\n", fahrenheit, (5.0/9.0) * (fahrenheit-32));
}
