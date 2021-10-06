/* printLetter.c */
#include <stdio.h>
#define ROWS 6

int main(void)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j <= i; j++)
            putchar('A' + ROWS - 1 - j);
        putchar('\n');
    }

    return 0;
}