/* put_put.c
user-defined output function
*/
#include <stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
    put1("If I'd as much money");
    put1(" as I could spend, \n");
    printf("I count %d characters.\n", 
            put2("I never would cry old charis to mend. "));
    
    return 0;
}

void put1(const char *string) // stirng not altered
{
    while (*string != '\0')
        putchar(*string++);
}

int put2(const char *string)
{
    int count = 0;

    while (*string)         // common idion,
    {                       // which means when string point to \o,
        putchar(*string++); // *string will be 0, then end the loop
        count++;
    }
    putchar('\n');

    return count ;
}