/* proto.c
use a function prototype
*/
#include <stdio.h>

int imax(int, int);

int main(void)
{
    // printf("The maximum of %d and %d is %d.\n",
    //        3, 5, imax(3));
    // Error generated
    // correct the imax(3) to imax(3, 5)
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3, 5));

    // the compiler would check the parameter
    // convert doulbe into integer
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3.0, 5.0));

    // Although the complier allows conversion of double to int
    // it may loss some information
    // the result of imax(3.9, 5.4) has same result of imax(3, 5)

    return 0;
}

int imax(int n, int m)
{
    return (n > m) ? n : m;
}