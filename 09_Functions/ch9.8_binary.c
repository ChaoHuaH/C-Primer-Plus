/* binary.c
use Reversal of Recursion 
to prints integer in binary form
*/
#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an integer (q to quit): \n");
    while (scanf("%lu", &number) == 1)
    {
        printf("binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit): \n");
    }
    printf("Done.\n");

    return 0;
}

// why use recursion?
// the first r should be printed last 
// therefore, we can use the feature of recursion reversal to do the job
// integer 6: binary equivalent 110
// n = 6       : r = 6 % 2 = 0
// n = 6/2 = 3 : r = 3 % 2 = 1
// n = 3/2 = 1 : r = 1 % 2 = 1

void to_binary(unsigned long n)  // recursive function
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1'); // print reversal 

    return;
}