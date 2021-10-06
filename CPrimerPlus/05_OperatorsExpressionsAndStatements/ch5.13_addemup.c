/* addemup.c
five kinds of statements
*/
#include <stdio.h>

int main(void) // find sum of first 20 integers
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ < 20)
    {
        sum = sum + count;
        printf("count = %2d ", count);
        printf("sum = %3d\n", sum);
    }
    printf("=========");
    printf(" sum = %d\n", sum);

    return 0;
}