/* reverseInt.c */
#include <stdio.h>
#define SIZE 8

int main(void)
{
    int arr[SIZE];

    printf("Please enter %d integer:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d: ", i + 1);
        while(scanf("%d", &arr[i]) != 1)
        {
            scanf("%*s");
            printf("Please enter an integer: ");
        }

    }
    printf("You entered: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%4d", arr[i]);
        if (i < SIZE - 1) printf(", ");
    }
        
    printf("\n");

    printf("Reversed   : ");
    for (int i = SIZE - 1; i >= 0; i--)
    {
        printf("%4d", arr[i]);
        if (i != 0) printf(", ");
    }
    printf("\n");

    return 0;    
}