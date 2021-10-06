/* ASCII.c
enter ASCII number
and print the according char
*/
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter an ASCII number: ");
    scanf("%d", &ch);
    printf("ASCII %d = %c\n", ch, ch);

    return 0;
}