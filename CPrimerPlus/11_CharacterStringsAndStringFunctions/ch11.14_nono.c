/* nono.c
a bad code
*/
#include <stdio.h>

int main(void)
{
    char side_a[] = "Side a";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side b";

    puts(dont); // dont is not a string
                // therefore, it may print out many chars until it encounter a '\0'
                // puts() use '\0' as indicator to stop

    return 0;
}