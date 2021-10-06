/* printName2.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[21];

    printf("Enter your name:\n");
    scanf("%20s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    unsigned len = strlen(name) + 3;
    printf("%*s\n", len, name);

    return 0;
}