/* findspace.c
find the location of the first space
if there are no splace, then return \0
*/
#include <stdio.h>
char * findspace(const char * str);

int main(void)
{
    char * st = "There are 5 spaces in the string.";
    char * loc = findspace(st);
    puts(st);
    printf("pointer of the string    : %p\n", st);
    printf("The first space is at loc: %p\n", loc);
    printf("%ld\n", loc - st);

    st = "Therearenospacesinthestring.";
    loc = findspace(st);
    puts(st);
    printf("pointer of the string    : %p\n", st);
    printf("The first space is at loc: %p\n", loc);
    printf("%ld\n", loc - st);

    return 0;
}

char * findspace(const char * str)
{
    while (*str != '\0' && *str != ' ')
        str++;

    if (*str == '\0')
        return NULL;
    else 
        return (char * ) str;  // remove the "const" char * definition
}
