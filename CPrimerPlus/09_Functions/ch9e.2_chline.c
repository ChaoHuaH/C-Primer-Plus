/*
print the ch from location ith to jth
*/

#include <stdio.h>

void chline(char ch, int i, int j)
{
    int idx = 0;
    while (idx < i - 1)
    {
        printf(" ");
        idx++;
    }
    while (idx < j)
    {
        printf("%c", ch);
        idx++;
    }
    printf("\n");
}

int main(void)
{
    printf("12345678901234567890\n");
    chline('*', 3, 6);
    chline('a', 5, 10);
    chline('b', 5, 20);
}