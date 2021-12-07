/* twoFloats.c
ask to input two float ft1 ft2
calculate (ft1 - ft2) / (ft1 * ft2)
*/
#include <stdio.h>

int main(void)
{
    double ft1, ft2;
    printf("Enter two floats: \n");
    
    while (scanf("%lf %lf", &ft1, &ft2) == 2)
    {
        printf("(%.2lf - %.2lf) / (%.2lf * %.2lf) = ",
                ft1, ft2, ft1, ft2);
        printf("%lf\n\n", (ft1 - ft2) / (ft1 * ft2));

        printf("Enter two floats: \n");
    }

    return 0;
}