/* printCubes.c
print the cube of a double
*/
#include <stdio.h>

double cube(double n)
{
    return n * n * n;
}

int main(void)
{
    double n;

    printf("Enter a float: ");
    scanf("%lf", &n);
    printf("The cube of %.2lf = %lf.\n",
            n, cube(n));
    
    return 0;
}