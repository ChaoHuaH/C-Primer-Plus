/* readWord.c
Design and test a function like that described in Programming Exercise 3
except that it accepts a second parameter specifying the maximum number of
characters that can be read.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * readWord(char * str, int n);

int main(void)
{
    char * string;

    puts("Enter some text");
    readWord(string, 6);
    puts("=======================");
    puts(string);
    puts("=======================");
    for (int i = 0; i < strlen(string) + 1; i++)
    {
        if (isspace(string[i]))
            putchar('*');
        else if (string[i] == '\0')
            putchar('+');
        else 
            putchar(string[i]);
    }
    printf("|||\n");

    return 0;
}

char * readWord(char * str, int n)
{
    char * goal = str;
    int ch;
    int i = 0;
    

    while ((ch = getchar()) != EOF && !isspace(ch) && i++ < n)
        *str++ = ch;
    *str = '\0';

    while (getchar() != '\n')  // discard the rest of the line
        continue;
    
    return goal;
}