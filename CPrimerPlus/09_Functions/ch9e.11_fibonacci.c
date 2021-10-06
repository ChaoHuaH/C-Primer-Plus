/* 
print out fibonacci sequence
*/
#include <stdio.h>

void fibonacciSeq(unsigned long n)
{
    unsigned long f0 = 0, f1 = 1;
    unsigned long temp;
    printf("print %lu numbers: \n", n);
    if (n >= 1)
        printf("%lu ", f0);
    if (n >= 2)
        printf("%lu ", f1);
    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            temp = f1;
            f1 = f1 + f0;
            f0 = temp;
            printf("%lu ", f1);
            if ( (i + 1) % 10 == 0)
                printf("\n");
        }
    }
    printf("\nEnd...\n\n");
}

int main(void)
{
    fibonacciSeq(12);
    fibonacciSeq(20);
    fibonacciSeq(24);
    fibonacciSeq(30);
    fibonacciSeq(31);
}