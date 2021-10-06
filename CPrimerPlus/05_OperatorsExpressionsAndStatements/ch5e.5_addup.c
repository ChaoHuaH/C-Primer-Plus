/* addup.c
add from 1 to the n (user assign)
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
        sum += i++;
    printf("Sum from 1 to %d = %d\n",
            n, sum);
    
    return 0;
}