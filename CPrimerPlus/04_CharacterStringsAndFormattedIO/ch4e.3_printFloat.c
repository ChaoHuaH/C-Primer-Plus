/* printFloat.c */
#include <stdio.h>

int main(void)
{
    float fl;
    printf("Enter a float:\n");
    scanf("%f", &fl);

    printf("The input is %.1f or %.1e.\n", fl, fl);
    printf("The input is %+.3f or %.3E.\n", fl, fl);

    return 0;
}