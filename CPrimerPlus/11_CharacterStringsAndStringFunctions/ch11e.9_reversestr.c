/* reversestr.c
Write a function that replaces the contents of a string with the string
reversed. Test the function in a complete program that uses a loop to
provide input values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 20
void reversestr(char * str);

int main(void)
{
    char str[SIZE];
    char * replace;

    puts("Enter some text: ");
    while (fgets(str, SIZE, stdin) && *str != '\n')
    {
        replace = strchr(str, '\n');
        *replace = '\0';
        
        puts("-----------------");
        puts("Original:");
        puts(str);

        reversestr(str);
        puts("Reversed:");
        puts(str);
        // for (int i = 0; i < SIZE; i++)
        // {
        //     if (str[i] == '\0')
        //         printf("*");
        //     else 
        //         putchar(str[i]);
        // }

        puts("\n-----------------");
        puts("Enter some text: ");
    }

    return 0;    
}

void reversestr(char * str)
{
    int n = strlen(str);
    int i = 0;
    char temp[n + 1]; 
    strncpy(temp, str, n);

    for (i = 0; i < n; i++)
    {
        str[i] = temp[n - 1 - i];
    }
}


