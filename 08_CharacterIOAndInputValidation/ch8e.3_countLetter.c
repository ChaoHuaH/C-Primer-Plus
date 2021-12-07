/* countLetter.c
count how many Upper letter and lower letters
*/
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int lower, upper, other;
    lower = upper = other = 0;

    while ((ch = getchar()) != EOF)
    {
        if (islower(ch))
            lower++;
        else if (isupper(ch))
            upper++;
        else 
            other++;            
    }
    printf("There are %4d lower letters\n", lower);
    printf("There are %4d upper letters\n", upper);
    printf("There are %4d other letters\n", other);

    return 0;
}