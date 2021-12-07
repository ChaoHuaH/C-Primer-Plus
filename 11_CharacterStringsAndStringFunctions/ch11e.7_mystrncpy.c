/* mystrncpy.c
The strncpy(s1,s2,n) function copies exactly n characters from s2 to s1,
truncating s2 or padding it with extra null characters as necessary. The
target string may not be null-terminated if the length of s2 is n or more.
The function returns s1. Write your own version of this function; call it
mystrncpy(). Test the function in a complete program that uses a loop to
provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 20
#define TARGSIZE 5
char * mystrncpy(char * s1, const char * s2, int n);

int main(void)
{
    char input[SIZE];
    char std[TARGSIZE+1];
    char my[TARGSIZE+1];
    char * replace;
    int i;

    puts("Enter some text");
    while (fgets(input, SIZE, stdin) && input[0] != '\n')
    {
        puts("==========================");
        replace = strchr(input, '\n');
        *replace = '\0';
        strncpy(std, input, TARGSIZE);
        mystrncpy(my, input, TARGSIZE);
        puts("==========================");
        printf("input: %s\n", input);
        printf("std  : %s\n", std);
        printf("my   : %s\n", my);
        printf("&input: %p, len = %ld\n", input, strlen(input));
        printf("&std  : %p, len = %ld\n", std, strlen(std));
        printf("&my   : %p, len = %ld\n", my, strlen(my));
        puts("==========================");
    }
    puts("Bye");

    return 0;
}

char * mystrncpy(char * s1, const char * s2, int n)
{
    // const char * 
    int i = 0;

    while ( i < n && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    if (i < n)
        s1[i] = '\0';

    return s1;
}
