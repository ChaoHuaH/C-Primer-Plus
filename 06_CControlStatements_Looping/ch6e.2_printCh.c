/* printStar.c
print a increasing number of $ on each rows
*/
#include <stdio.h>
#define ROWS 6

int main(void)
{
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%c", '$');
        printf("\n");
    }   

    return 0;
}