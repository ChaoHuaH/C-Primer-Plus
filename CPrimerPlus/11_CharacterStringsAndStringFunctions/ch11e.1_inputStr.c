/* inputStr.c
Design and test a function that fetches the next n characters from input
(including blanks, tabs, and newlines), storing the results in an array
whose address is passed as an argument.
*/
#include <stdio.h>
#define SIZE 5
void inputStr(char * str, int n);

int main(void)
{
    char * arr;

    printf("Enter text with maximum %d characters.\n", SIZE);
    printf("1234567890\n");
    inputStr(arr, SIZE);
    printf("================\n");
    printf("%s", arr);

    return 0;        
}

void inputStr(char * str, int n)
{
    int ch;
    int i = 0;
    while ((ch = getchar()) != EOF && i < n)
    {
        *str++ = ch;
        i++;
    }
}