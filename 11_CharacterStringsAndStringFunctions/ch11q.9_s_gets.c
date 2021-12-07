/* s_gets.c
modify s_gest: 
use pointer replace array
use ch11.33 as sample to test the new s_gets
*/
#include <stdio.h>
#include <stdlib.h>
#define LIM 30  
char * s_gets(char * st, int n);

int main(void)
{
    char number[LIM];
    char * end;
    long value;

    puts("Enter a number (wmpty line to quit):");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10); // base 10
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
        value = strtol(number, &end, 16); // base 16
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
                value, end, *end);
        puts("Next number:");
    }
    puts("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}
