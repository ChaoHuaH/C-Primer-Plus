/* printDouble.c
create two double array with same size n
ask user to input n values and save it in array1
save the accumulate sum in array2
*/
#include <stdio.h>
#define SIZE 8

int main(void)
{
    double val[SIZE], sum[SIZE];

    // user input
    printf("Enter %d doubles\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        while (scanf("%lf", &val[i]) != 1)
        {
            scanf("%*s");
            printf("Please enter doubles:\n");
        }
    }

    // calculate the cumulative sum
    sum[0] = val[0];
    for (int i = 1; i < SIZE; i++)
        sum[i] = sum[i - 1] + val[i];

    printf("Values entered: ");
    for (int i = 0; i < SIZE; i++)
        printf("%5.1lf ", val[i]);
    printf("\n");

    printf("Cumulateive   : ");
    for (int i = 0; i < SIZE; i++)
        printf("%5.1lf ", sum[i]);
    printf("\n");

    return 0;
}