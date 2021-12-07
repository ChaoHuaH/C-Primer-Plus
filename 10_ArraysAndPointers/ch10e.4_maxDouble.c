/* maxDoubleIdx.c
find the index of the maximum double in an array
*/
#include <stdio.h>

int maxDouble(double * arr, int n)
{
    int maxIdx = 0;
    for (int i = 0; i < n; i++)
            maxIdx = (arr[i] > arr[maxIdx]) ? i : maxIdx; 

    return maxIdx;
}

int main(void){

    int n;
    double * arr;

    n = 4;
    arr = (double []){10.3, 44.1, 0.3, 7.1};
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%.1f ", arr[i]);
    printf("\n");
    printf("max index: %.d\n", maxDouble(arr, n));
    printf("max value: %.1f\n\n", arr[maxDouble(arr, n)]);

    n = 7;
    arr = (double []){10.3, 44.1, 0.3, 7.1, 100.3, 4.3, 0.3};
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%.1f ", arr[i]);
    printf("\n");
    printf("max index: %.d\n", maxDouble(arr, n));
    printf("max value: %.1f\n\n", arr[maxDouble(arr, n)]);


    return 0;
}