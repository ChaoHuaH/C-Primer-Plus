/* reverseLetter.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Revers string : ");
    for (int idx = strlen(str); idx >= 0; idx--)
        printf("%c", str[idx]);
    printf("\n");

    return 0;
}