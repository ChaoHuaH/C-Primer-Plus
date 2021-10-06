/* countChar.c
calculate the number of space, '\n', and other chars
enter # to quit
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int n_char, n_space, n_newline, n_tab;
    n_char = n_space = n_newline = n_tab = 0;

    printf("Enter some text. (# to quit):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case ' ':
                n_space++;
                break;
            case '\n':
                n_newline++;
                break;
            case '\t':
                n_tab++;
                break;
            default:
                n_char++;
                break;
        }
    }
    printf("    char    space  newline      tab\n");
    printf("%8d %8d %8d %8d\n",
            n_char, n_space, n_newline, n_tab);
    
    return 0;
}