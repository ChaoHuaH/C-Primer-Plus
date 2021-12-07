/* printASCII.c
enter text and print out the ASCI
*/
#include <stdio.h>

int main(void)
{
    char ch;
    int n = 0;

    printf("Enter some text. (# to quit): \n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            n = 0;
            printf("\n\nEnter some text. (# to quit): \n");
            continue;
        }
        n++;
        printf("%c:%-4d", ch, ch);

        if (n % 8 == 0)
            putchar('\n');
    }
    printf("\nDone!\n");

    return 0;
}