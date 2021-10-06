/* sumArray.
sum elements from 2 array
and save in another array
*/
#include <stdio.h>
#define SIZE 4

void sumArrary(int * target, int * source1, int * source2, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source1 + i) + *(source2 + i);
}

void printArray(int * ar, int n)
{
    for (int i = 0; i < n; i++)
        printf("%4d ", ar[i]);
    printf("\n");
}


int main(void)
{
    int sour1[SIZE] = {2, 4, 5, 8};
    int sour2[SIZE] = {1, 0, 4, 6};
    int target[SIZE];

    printf("source1: \n");
    printArray(sour1, SIZE);

    printf("source2: \n");
    printArray(sour2, SIZE);

    sumArrary(target, sour1, sour2, SIZE);
    printf("target: \n");
    printArray(target, SIZE);

    return 0;
}