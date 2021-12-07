/* convertMark2.c
use switch statement
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
        switch (ch)
        {
            case '\n': 
                printf("\nEnter some text (# to quit): \n");
                break;
            case '.':
                putchar('!');
                n_covert++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                n_covert++;
                break;
            default: 
                putchar(ch);
                break;
        }
    }
    printf("Number of conversions: %d\n", n_covert);

    return 0;
}