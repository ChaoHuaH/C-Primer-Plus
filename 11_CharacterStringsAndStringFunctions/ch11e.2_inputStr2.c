/* inputStr2.c
Modify and test the function in exercise 1 so that it stops after n
characters or after the first blank, tab, or newline, whichever comes
first. (Don’t just use scanf().)
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 5
void inputStr(char *str, int n);

int main(void)
{
    char *arr;

    printf("Enter text with maximum %d characters.\n", SIZE);
    printf("1234567890\n");
    inputStr(arr, SIZE);
    printf("================\n");
    printf("%s\n ", arr);

    return 0;
}

void inputStr(char *str, int n)
{
    int ch;
    int i = 0;
    while ((ch = getchar()) != EOF &&
           i < n && !isspace(ch))
    {
        *str++ = ch;
        i++;
    }
}