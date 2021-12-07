/* squareSum.c
calculate the sum of squares
*/
#include <stdio.h>

int main(void)
{
    long lower, upper, i, sum;
    printf("Enter lower and upper integer limit: ");
    while (scanf("%ld %ld", &lower, &upper) == 2 &&
            upper > lower)
    {
        for (i = lower, sum = 0; i <= upper; i++)
        {
            // printf("%ld %ld\n", i, sum);
            sum += (i * i);
        }

        printf("The sums of the squares from %ld to %ld is %ld\n",
            lower * lower, upper * upper, sum);
        printf("Enter the next set of limits: ");
    }
    printf("Done\n");

    return 0;
}