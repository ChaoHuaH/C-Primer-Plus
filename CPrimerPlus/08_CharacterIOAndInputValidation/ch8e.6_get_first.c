/* get_first.c
get the first non-space character
*/
#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void)
{
    int ch;
    printf("Enter a text\n");
    ch = get_first();
    printf("the first letter of the text is %c\n", ch);

    return 0;
}

char get_first(void)
{
    int ch;
    while (isspace(ch = getchar()))
        continue;
    while (getchar() != '\n')
        continue;
    
    return ch;
}