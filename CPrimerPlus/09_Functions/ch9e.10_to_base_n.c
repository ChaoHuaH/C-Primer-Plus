/*
conver num from decimal to base n
*/
#include <stdio.h>

void to_base_n(unsigned long num, unsigned long n)
{
    unsigned long r = num % n;
    if (num >= n)
        to_base_n(num / n ,n);
    printf("%lu", r);
}

int main(void)
{
    unsigned long number;
    unsigned long n = 8;
    printf("Enter an integer (q to quit): \n");
    while (scanf("%lu", &number) == 1)
    {
        printf("%lu base equivalent: ", n);
        to_base_n(number, n);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done.\n");

    return 0;
}