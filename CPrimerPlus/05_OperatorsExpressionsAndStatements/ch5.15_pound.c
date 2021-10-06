/* pound.c
defines a function with an argument
*/
#include <stdio.h>
void pound(int n);

int main(void)
{
    int times = 5;
    char ch = '!';    // ANSI code is 33
    float f = 6.0f; 

    pound(times);   // int argument
    pound(ch);      // same as pound((int)ch);
    pound(f);       // same as poount((int)f);

    return 0;
}

void pound(int n)
{
    while (n-- > 0)
        printf("#");
    printf("\n");
}