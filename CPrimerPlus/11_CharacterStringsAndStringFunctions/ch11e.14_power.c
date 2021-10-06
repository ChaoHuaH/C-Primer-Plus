/* power.c
Write a power-law program that works on a command-line basis. The first
command-line argument should be the type double number to be raised to a
certain power, and the second argument should be the integer power.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    double value = 1;
    double base = atof(argv[1]);
    int power = atoi(argv[2]);
    
    for (int i = 0; i < power; i++)
    {
        value *= base;
    }
    printf("%.2f\n", value);

    return 0;
}