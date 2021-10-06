/* isLetter.c
input a text
exprot whether it is a letter
if it's a letter, report its numerical location in the alphabet
for example, c and C would both be letter 3
*/
#include <stdio.h>
#include <ctype.h>
void letterLocation(int ch);

int main(void)
{
    int ch;

    printf("Enter some text: \n");
    while ( (ch = getchar()) != EOF)
    {
        if ( isalpha(ch))
            letterLocation(ch);
        else if (ch < 32)
            printf("^%c:-1\n", ch + 64);
        else 
            printf("%2c:-1\n", ch);
    }
    printf("\n");

    return 0;
}


void letterLocation(int ch)
{
    if (isupper(ch))
        printf("%2c:%02d\n", ch, ch - 'A' + 1);
    else 
        printf("%2c:%02d\n", ch, ch - 'a' + 1);
}