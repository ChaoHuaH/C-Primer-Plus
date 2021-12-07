/* put2.c
prints a string and counts characters
*/
#include <stdio.h>

int put2(const char *string)
{
    int count = 0;

    while (*string)          // common idion,
    {                        // which means when string point to \o,
        putchar(*string++);  // *string will be 0, then end the loop
            count++;       
    }
    putchar('\n');

    return(count);
}