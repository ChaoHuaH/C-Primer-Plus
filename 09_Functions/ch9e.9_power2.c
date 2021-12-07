/* power.c 
use a recursive function to calculate power
*/
#include <stdio.h>
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and a integer power to which\n");
    printf("the number will be raised. Enter q to quit.\n");
    printf("use the format n^p\n");
    while (scanf("%lf^%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to power %d is %.5g\n\n", x, exp, xpow);
        printf("Enter the next pair of number or q to quit.\n");
    }
    printf("Hoep you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    if (n == 0)
        return 0;
    else
    {
        if (p == 0)
            return 1;
        else if (p > 0)
            return n * power(n, p - 1);
        else 
            return power(n, p + 1) / n;
    }
}