/* doubleDiff.c
calculate the difference of the max and the min in an array
*/
#include <stdio.h>

double doubleDiff(double * arr, int n)
{
    double min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        min = (min > arr[i]) ? arr[i] : min;
        max = (max < arr[i]) ? arr[i] : max;
    }

    return max - min;
}

int main(void)
{
    int n;
    double * arr;

    n = 4;
    arr = (double []){10.3, 44.1, 0.3, 7.1};
    for (int i = 0; i < n; i++)
        printf("%8.1f ", arr[i]);
    printf("\n");
    printf("\nMax - Min: %.1f\n\n", doubleDiff(arr, n));


    n = 7;
    arr = (double []){10.3, 44.1, 30, 7.1, 33.3, 90.3, 100.1};
    for (int i = 0; i < n; i++)
        printf("%8.1f ", arr[i]);
    printf("\n");
    printf("\nMax - Min: %.1f\n\n", doubleDiff(arr, n));
    
    return 0;
}