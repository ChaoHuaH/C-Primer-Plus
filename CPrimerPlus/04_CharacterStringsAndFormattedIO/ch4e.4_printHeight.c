/* printHeight.c */
#include <stdio.h>

int main(void)
{
    char name[40];
    int cm;

    printf("What's your name? ");
    scanf("%s", name);
    printf("Enter your height in cm: ");
    scanf("%d", &cm);

    printf("%s, you are %.2f meter tall\n", name, cm/100.0);

    return 0;
}