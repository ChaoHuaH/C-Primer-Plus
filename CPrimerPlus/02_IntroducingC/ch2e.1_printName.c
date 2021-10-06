/* printName.c */
#include <stdio.h>

int main(void)
{
    char first[] = "Chao";
    char last[] = "Huang";

    printf("%s %s\n", last, first);
    printf("%s\n%s\n", last, first);
    printf("%s ", last);
    printf("%s\n", first);

    return 0;
}