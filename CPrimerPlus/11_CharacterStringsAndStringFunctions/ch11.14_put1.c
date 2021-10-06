/* put1.c
prints a string without add \n
*/
#include <stdio.h>
void put1(const char * string) // stirng not altered
{
    while (*string != '\0')
        putchar(*string++);
}