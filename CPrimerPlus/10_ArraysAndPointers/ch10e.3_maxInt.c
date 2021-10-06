/* maxInt.c
find the maximum int of an array
*/
#include <stdio.h>

int maxInt(int arr[], int n)
{
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    int max = arr[0];
    for (int j = 1; j < n; j++)
    {
        max = (arr[j] > max) ? arr[j] : max;
        // printf("%d\n", max);
    }
    
    return max;
}

int main (void){

    int arr1[6] = {4, 0, 1, 99, 22, 34};
    printf("the max: %d\n\n", maxInt(arr1, 6));

    int arr2[7] = {4, 0, 1, 99, 22, 34, 1000};
    printf("the max: %d\n\n", maxInt(arr2, 7));

    return 0;
}