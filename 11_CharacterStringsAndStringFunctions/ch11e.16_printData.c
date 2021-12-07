/* printData.c
Write a program that reads input until end-of-file and echoes it to the
display. Have the program recognize and implement the following command-line
arguments:
	- p Print input as is
	- u Map input to all uppercase
	- l Map input to all lowercase
Also, if there are no command-line arguments, let the program behave as if
the –p argument had been used.
*/
#include <stdio.h>
#include <ctype.h>
void print_ori(void);
void print_upper(void);
void print_lower(void);

int main(int argc, char *argv[])
{

    printf("Enter some text\n");
    if (argc < 2)
        print_ori();
    else
    {
        switch (argv[1][1])
        {
            case 'p':
                print_ori();
                break;
            case 'u':
                print_upper();
                break;
            case 'l':
                print_lower();
                break;
            default:
                printf("Usage: [-p| -l| -u]\n");
                break;
        }
    }

    return 0;
}

void print_ori(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
}

void print_upper(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        ch = toupper(ch);
        putchar(ch);
    }
}

void print_lower(void)
{
    int ch;
    while ( (ch = getchar()) != EOF)
    {
        ch = tolower(ch);
        putchar(ch);
    }
}