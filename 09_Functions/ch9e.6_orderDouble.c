/* 
order three doubles by it value
*/
#include <stdio.h>

void orderDouble(double *x, double *y, double *z)
{
    double min = (*x < *y) ? *x : *y;
    double median = (*x < *y) ? *y : *x;
    if (*z < median)
    {
        if (*z < min)
        {            
            *y = min;
            *x = *z;
            *z = median;
        }
        else
        {
            *x = min;
            *y = *z;
            *z = median;
        }
    }
    else 
    {
        *x = min;
        *y = median;
    }
    
}

int main(void)
{
    double x, y, z;

    x = 1, y = 2, z = 3;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);

    x = 1, y = 3, z = 2;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);

    x = 2, y = 1, z = 3;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);    
    
    x = 2, y = 3, z = 1;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);

    x = 3, y = 1, z = 2;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);

    x = 3, y = 2, z = 1;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);

    x = 1, y = 2, z = 2;
    printf("Original: x = %.2f, y = %.2f, z = %.2f\n", x, y, z);
    orderDouble(&x, &y, &z);
    printf("Now:      x = %.2f, y = %.2f, z = %.2f\n\n", x, y, z);
    
    return 0;
}