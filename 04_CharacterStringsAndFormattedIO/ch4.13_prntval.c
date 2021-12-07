/* prntval.c
finding printf()'s return value
= the length of the print
*/
#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    printf("1234567890123456789012345678901234567890\n");
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n",
            rv); // return value include chars, space and \n
    
    return 0;
}