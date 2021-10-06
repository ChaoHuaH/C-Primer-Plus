/* printSqrCube.c
print a table of n n^2 n^3
*/
#include <stdio.h>

int square(int);
int cube(int);

int main(void)
{
    int lower, upper;
    printf("Enter a lower bound integer: ");
    scanf("%d", &lower);
    printf("Enter a upper bound integer: ");
    scanf("%d", &upper);
    if (lower > upper)
    {
        printf("Upper bound should bigger than lower bound!\n");
        return 1;
    }

    printf("     n  square(n)  cube(n)\n");
    for (int n = lower; n <= upper; n++)
    {
        printf("%6d %6d %10d\n", n, square(n), cube(n));
    }


    return 0;
}


int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}