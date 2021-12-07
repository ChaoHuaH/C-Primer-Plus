/* printFloat2.c */
#include <stdio.h>
#include <float.h>

int main(void)
{
    double db = 1.0/3.0;
    float ft = 1.0/3.0;

    printf("%6sdouble%15sfloat\n", " ", " ");
    printf("===============================================\n");
    printf("%%.4f  %-20.4f %-20.4f \n", db, ft);
    printf("%%.12f %-20.12f %-20.12f \n", db, ft);
    printf("%%.16f %-20.16f %-20.16f \n", db, ft);
    printf("%%.18f %-20.18f %-20.18f \n", db, ft);
    printf("\n");

    printf("FLT_DIG: %u\n", FLT_DIG);
    printf("DBL_DIG: %u\n", DBL_DIG);

    return 0;
}