/* sweetie1.c
a counting loop
*/
#include <stdio.h>

int main(void)
{
    const int NUMBER = 5;
    int count = 1;

    while (count <= NUMBER)
    {
        printf("Be my valentine!\n");
        count++;
    }

    return 0;
}