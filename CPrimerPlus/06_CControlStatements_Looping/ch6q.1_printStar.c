/* printStar.c */
#include <stdio.h>
#define ROWS 4
#define COLS 8
#define CH '#'

int main(void)
{
    printf("1234567890\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            putchar(CH);
        printf("\n");
    }

    return 0; 
}