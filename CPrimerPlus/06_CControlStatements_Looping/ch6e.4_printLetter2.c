/* printLetter2.c */
#include <stdio.h>
#define ROWS 6

int main(void)
{
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // i*(i-1)/ 2 is the number of printed letter
            putchar('A' + i*(i-1)/2 + j);  
        }            
        printf("\n");
    }

    return 0;
}