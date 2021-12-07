/* friendNum.c
start with 5 friends
1st week: one friend quit and add (5 - 1)*2 friends = 8
2nd week: two friends quit and add (8 - 2)* 2 friends = 12
Nth week; N frineds quit and remaining friends * 2
until number of friends > DUNBAR
*/
#include <stdio.h>
#define START 5
#define DUNBAR 150

int main(void)
{
    int i = 0;
    int friend = START;
    
    printf("  week  Num of friends\n");
    do {
        printf("%5d    %6d\n", i++, friend);
        friend -= i;
        friend *= 2;
    } while (friend < DUNBAR);
    printf("=================\n");
    printf("%5d    %6d\n", i, friend);

    return 0;
}