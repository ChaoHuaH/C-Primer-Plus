/*
set two number as the larger one
x = 5; y = 9
after larger_of(x, y)
x = 9; y = 9
*/
#include <stdio.h>

void larger_of(double * x, double * y)
{
    *x = (*x > *y) ? *x : *y;
    *y = *x;
}

int main(void)
{
    double x = 5.5;
    double y = 5.6;

    printf("Original x = %.2f and y = %.2f\n", x, y);
    printf("---- larger_of() ----\n");
    larger_of(&x, &y);
    printf("Now      x = %.2f and y = %.2f\n", x, y);

    printf("\n\n");
    printf("=====================\n");
    x = 100;
    y = 3;
    printf("Original x = %.2f and y = %.2f\n", x, y);
    printf("---- larger_of() ----\n");
    larger_of(&x, &y);
    printf("Now      x = %.2f and y = %.2f\n", x, y);

    return 0;
}