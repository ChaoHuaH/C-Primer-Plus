/* convertMark.c
use if else statement
convert '.' to '!'
convert '!' to '!''!'
# to quit
*/
#include <stdio.h>

int main(void)
{
    int n_covert = 0;  // number of conversion
    char ch;

    printf("Enter some text (# to quit): \n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            printf("\nEnter some text (# to quit): \n");
        }
        else if (ch == '.')
        {
            putchar('!');
            n_covert++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            n_covert++;
        }
        else 
            putchar(ch);    
    }
    printf("Number of conversion: %d\n", n_covert);

    return 0;
}