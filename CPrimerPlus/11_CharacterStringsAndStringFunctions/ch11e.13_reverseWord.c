/* reverseWord.c
Write a program that echoes the command-line arguments in reverse word
order. That is, if the command-line arguments are see you later, the program
should print later you see.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

int main(void)
{
    int i, n, put;
    char str[SIZE];

    while (fgets(str, SIZE, stdin) != NULL)
    { 
        n = strlen(str) - 1; // nnumber of chars, include \n, so need to minus 1

        for (i = n - 1; i >= 0; i--)
        {
            if (isspace(str[i]) || ispunct(str[i]) || 
                str[i] == '\n' || str[i] == '\0')
            {
                for (put = i + 1; 
                    !isspace(str[put]) && !ispunct(str[put]) && 
                    str[put] != '\n' && str[put] != '\0';
                    put++)
                {
                    putchar(str[put]);    
                }
                putchar(' ');
            }
            else if (i == 0)
            {
                for (put = 0; 
                    !isspace(str[put]) && !ispunct(str[put]) && 
                    str[put] != '\n' && str[put] != '\0';
                    put++)
                {
                    putchar(str[put]);    
                }
                putchar(' ');
            }
            
        }
        putchar('\n');
        puts("=============================");
    }

    return 0;
}