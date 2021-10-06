/* is_within.c
Write a function called is_within() that takes a character and a string
pointer as its two function parameters. Have the function return a
nonzero value (true) if the character is in the string and zero (false)
otherwise. Test the function in a complete program that uses a loop to
provide input values for feeding to the function.
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LIMIT 10
bool is_within(char * str, char ch);

int main(void)
{
    char * input;
    char * replace;
    char ch = 'c';

    puts("Enter some text");
    while (fgets(input, LIMIT, stdin) && *input != '\n')
    {
        replace = strchr(input, '\n');
        *replace = '\0';
        printf("=========================================\n");
        printf("%c in %s: %s\n", ch, input, 
        is_within(input, 'c')? "true" : "false");
        printf("=========================================\n");
    }
    puts("Bye");

    return 0;
}


bool is_within(char * str, char ch)
{
    while (*str != '\0' && *str != ch)
        str++;
    
    if (*str == '\0')
        return false;
    else 
        return true;
}