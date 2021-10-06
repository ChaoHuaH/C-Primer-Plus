/* compare.c 
compare two string
ignore the upper or lower letter
*/
#include <stdio.h>
#include <string.h> // declare strcmp()
#include <ctype.h>
#define ANSWER "GRANT"
#define SIZE 40 
char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    for (int i = 0; i < strlen(try); i++)
        try[i] = toupper(try[i]);

    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else 
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}