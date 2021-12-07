/* printLetter.c
print 26 letters
*/
#include <stdio.h>
#define SIZE 26

int main(void)
{
    char let[SIZE];

    for (int i = 0; i < SIZE; i++)
        let[i] = 'a' + i;
    for (int i = 0; i < SIZE; i++)
        printf("%c", let[i]);
    printf("\n");

    return 0;
}