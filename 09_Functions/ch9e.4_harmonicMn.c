/*
calculate harmonic mean
*/
#include <stdio.h>

double harmonic(double x, double y)
{
    return 2 / (1/x + 1/y);
}

int main(void)
{
    double x = 0.25;
    double y = 0.2;
    printf("the harmonic mean of %.2f an %.2f is %.5f\n", x, y, harmonic(x, y));

    x = 4;
    y = 9;
    printf("the harmonic mean of %.2f an %.2f is %.5f\n", x, y, harmonic(x, y));

    return 0;
}