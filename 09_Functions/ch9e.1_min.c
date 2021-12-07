/*
choose the min of two integer
*/
#include <stdio.h>

double min(double x, double y)
{
    return (x < y) ? x : y;
}

int main(void)
{
    double x = 4.31;
    double y = 9.1;

    printf("The min of %.2f and %.2f is %.2f\n",
        x, y, min(x, y));

}