/* printName3.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[30];
    char last[30];
    unsigned n_first;
    unsigned n_last;

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);

    n_first = strlen(first);
    n_last = strlen(last);
    printf("%s %s\n", first, last);
    printf("%*d %*d\n", n_first, n_first, n_last, n_last);
    printf("%s %s\n", first, last);
    printf("%-*d %-*d\n", n_first, n_first, n_last, n_last);
    
    


}