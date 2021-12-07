/* printASCII.c
Enter text and print the according ASCII code
- enter: exprot \n
- space
*/
#include <stdio.h>

int main(void)
{
    int ch;
    int i = 0;

    while ((ch = getchar())!= EOF)
    {
        if (ch == '\n')
            printf(" \\n:%03d", ch);
        else if (ch == '\t')
            printf(" \\t:%03d", ch);
        else if (ch > 0 && ch < 32)
            printf(" ^%c:%03d", ch + 64, ch);
        else 
            printf("%3c:%03d", ch, ch);

        i++;
        if (i % 10 == 0)
        {
            printf("\n");
            i = 0;
        }
            
        if (ch == '\n')
        {
            putchar('\n');
            i = 0;
        }
            
    } 
    printf("\n");

    return 0;
}