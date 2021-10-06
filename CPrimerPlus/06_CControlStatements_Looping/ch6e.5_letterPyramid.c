/* letterPyramid.c
print a letter pyramid
ask to input a letter 
and the pyramid should end with the letter at the middle bottom
*/
#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a capital letter: ");
    scanf("%c", &ch);

    int rows = ch - 'A' + 1;
    for (int i = 0; i < rows; i++)
    {
        int letter;
        for (int space = rows - i - 1; space > 0; space--)
            putchar(' ');
        for (letter = 0; letter < i+1; letter++)
            putchar('A' + letter);
        for (letter-=2; letter >= 0; letter--)
            putchar('A' + letter);
        printf("\n");
    }

    


    return 0;
}