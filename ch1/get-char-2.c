#include <stdio.h>

/*copy input to output; 2st version */
int main(void)
{
    int c;
    int result = ((c = getchar()) !=EOF);
    printf("%d\n", result);
}
