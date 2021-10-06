/* readWord.c
Design and test a function that reads the first word from a line of input
into an array and discards the rest of the line. It should skip over leading
whitespace. Define a word as a sequence of characters with no blanks, tabs,
or newlines in it. 
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * readWord(char * str);

int main(void)
{
    char * string;

    puts("Enter some text");
    readWord(string);
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

char * readWord(char * str)
{
    int ch;
    char * goal = str;

    while ((ch = getchar()) != EOF && !isspace(ch))
        *str++ = ch;
    *str = '\0';

    while (getchar() != '\n')  // discard the rest of the line
        continue;
    
    return goal;
}