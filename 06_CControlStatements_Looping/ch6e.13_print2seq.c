/* print2seq.c
print a seq of 2 power(1 to n)
*/
#include <stdio.h>
#define SIZE 10

int power(int n, int pow)
{
    int npow = 1;
    for (int i = 0; i < pow; i++)
        npow *= n;

    return npow;
}

int main(void)
{
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
        arr[i] = power(2, i + 1);

    int i = 0;
    do 
    {
        printf("%d ", arr[i++]);
    } while (i < SIZE);
    printf("\n");

    return 0;
}