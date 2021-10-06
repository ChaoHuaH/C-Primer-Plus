/* callFunc2.c
call 2 function to print
*/
#include <stdio.h>

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

int main(void)
{
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");

    return 0;    
}