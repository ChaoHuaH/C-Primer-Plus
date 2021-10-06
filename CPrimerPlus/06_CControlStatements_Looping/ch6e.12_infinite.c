/* infinite.c 
infinite sequence
*/
#include <stdio.h>

int main(void)
{
    long int i, n;
    float sum1;
    float sum2;
    printf("Enter a limit integer: ");
    while (scanf("%ld", &n) == 1 && n > 0)
    {
        for (i = 1, sum1 = 0, sum2 = 0; i <= n; i++)
        {
            sum1 += 1.0/ (float) i;
            sum2 += (1.0/ (float) i) * ((i % 2 == 1)? 1.0 : -1.0);
        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... = %.5f\n", sum1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... = %.5f\n\n", sum2);

        printf("Enter another limit integer: ");
    }
    printf("Done\n");
    
    return 0;
}