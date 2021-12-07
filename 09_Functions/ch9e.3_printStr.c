/* 
print a char for n times 
and repeat col lines
*/
#include <stdio.h>

void printChar(char ch, int n, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < n; j++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}

int main(void)
{
    printf("12345678901234567890\n");
    printChar('*', 10, 5);
    printf("====================\n");
    printChar('*', 3, 4);   
}
