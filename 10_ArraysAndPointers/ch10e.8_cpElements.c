/* cpElements.c
copy ith to jth element of an array to a new array
*/
#include <stdio.h>
#define SIZE 7


void copy_ptr(double * target, double * source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

int main(void)
{
    double sour[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double * tar;

    printf("soruce: ");
    for (int i = 0; i < SIZE; i++)
        printf("%.1f ", sour[i]);
    printf("\n");

    copy_ptr(tar, sour + 2, 3);
    printf("target: ");
    for (int i = 0; i < 3; i++)
        printf("%.1f ", tar[i]);
    printf("\n");

    return 0;
}