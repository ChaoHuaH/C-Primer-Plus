/* reverse.c
reverse an array
*/
#include <stdio.h>

void reverse(double * arr, int n)
{
    double temp;
    
    for (int i = 0; i < n/2; i++)
    {
        temp = arr[n - 1 - i];
        *(arr + n - 1 - i) = *(arr + i);
        *(arr + i) = temp;
    }
}

int main(void)
{
    int n;
    double * arr;

    n = 5;
    arr = (double []){1.0, 2.0, 2.2, 3.3, 4.0};
    printf("Original: ");
    for (int i = 0; i < n; i++)
        printf("%4.1f ", arr[i]);
    printf("\n");

    reverse(arr, n);
    printf("New     : ");
    for (int i = 0; i < n; i++)
        printf("%4.1f ", arr[i]);
    printf("\n\n");


    n = 8;
    arr = (double []){1.0, 10.2, 2.2, 3.3, 4.0, 5.3, 6.5, 7.9};
    printf("Original: ");
    for (int i = 0; i < n; i++)
        printf("%4.1f ", arr[i]);
    printf("\n");

    reverse(arr, n);
    printf("New     : ");
    for (int i = 0; i < n; i++)
        printf("%4.1f ", arr[i]);
    printf("\n\n");

    return 0;
}