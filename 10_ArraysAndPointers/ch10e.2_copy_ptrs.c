/* copy_ptrs.c
use three methods to copy an array 
*/
#include <stdio.h>


void copy_arr(double target[], double source[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, double * source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double * target, double * start, double * end)
{
    int idx = 0;
    while (start + idx <= end)
    {
        target[idx] = *(start + idx);
        idx++;
    }
}

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    printf("\nsource:  ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", source[i]);
    printf("\n");

    // use array index to copy
    copy_arr(target1, source, 5);
    printf("target1: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target1[i]);
    printf("\n");

    // use pointer and pointer increment to copy
    copy_ptr(target2, source, 5);
    printf("target2: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target2[i]);
    printf("\n");

    // use the start and end of source pointer to copy
    copy_ptrs(target3, source, source + 5);
    printf("target3: ");
    for (int i = 0; i < 5; i++)
        printf("%.1f ", target3[i]);
    printf("\n");

    

    return 0; 
}
