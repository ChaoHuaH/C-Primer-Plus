/* printInt.c
print an int to int + SIZE
*/
#include <stdio.h>
#define SIZE 10

int main(void)
{
    int i, j;
    printf("Enter an integer: ");
    scanf("%d", &i);
    j = i;
    while (i <= j + SIZE)
        printf("%d ", i++);
    printf("\nDone!\n");

    return 0;
}