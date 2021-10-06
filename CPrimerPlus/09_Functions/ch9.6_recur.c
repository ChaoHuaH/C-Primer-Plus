/* recur.c
recursion illustration
*/
#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level1 %d: n location %p\n", n, &n); // lv 1
    if(n < 4)
    {
        up_and_down(n+1);
    }
    else 
    {
        printf("----------------\n");
        printf("break out Level1\n");
        printf("----------------\n");
    }

    printf("Level2 %d: n location %p\n", n, &n); // lv 2
}