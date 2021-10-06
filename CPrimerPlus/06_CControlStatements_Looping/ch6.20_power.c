/* power.c
raises numbers to integer powers
*/
#include <stdio.h>
double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power to which\n");
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

    for (i = 1; i <= p; i++)
        pow *= n;

    return pow;
}