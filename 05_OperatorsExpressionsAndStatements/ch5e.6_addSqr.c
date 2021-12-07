/* addSqr.c
add square of int (int from 1 to n)
*/
#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += (i * i);
        i++;
    }
    printf("Sum from 1^2 to %d^2 = %d\n",
            n, sum);
    
    return 0;
}
