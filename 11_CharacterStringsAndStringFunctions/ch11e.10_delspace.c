/* delspace.c
Write a function that takes a string as an argument and removes the spaces
from the string. Test it in a program that uses a loop to read lines until
you enter an empty line. The program should apply the function to each input
string and display the result.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50
void delspace(char * str);

int main(void)
{
    char * str;
    char * replace;

    puts("Enter some text");
    while (fgets(str, SIZE, stdin) && *str != '\n')
    {
        replace = strchr(str, '\n');
        *replace = '\0';

        printf("Original     : %s\n", str);
        delspace(str);
        printf("delete spaces: %s\n", str);

        puts("\n=================");
        puts("Enter some text");
    }

    return 0;
}

void delspace(char * str)
{
    int i =0;
    while (*str != '\0')
    {
        if (isspace(*str))
            for (i = 0; str[i] != '\0'; i++)
                *(str + i) = *(str + i + 1);
        str++;
    }
}