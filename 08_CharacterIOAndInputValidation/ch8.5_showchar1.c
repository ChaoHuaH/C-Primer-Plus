/* showchar1.c
program with a BIG I/O problem
*/
#include <stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
    int ch;            // character to be printed
    int rows, cols;     // number of rows and columns
    printf("enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        // after enter the second int and press enter
        // the buffer keep the '\n'
        // and send to the second getchar 
        // which meet the rule of end the while loop
        printf("Enter another character and two integers:\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    
    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row < lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}