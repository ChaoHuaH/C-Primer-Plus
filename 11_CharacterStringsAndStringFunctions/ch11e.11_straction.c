/* straction.c
// Write a program that reads in up to 10 strings or to EOF, whichever comes
// first. Have it offer the user a menu with five choices: print the original
// list of strings, print the strings in ASCII collating sequence, print the
// strings in order of increasing length, print the strings in order of the
// length of the first word in the string, and quit. Have the menu recycle
// until the user enters the quit request. The program, of course, should
// actually perform the promised tasks.
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 50
#define LINES 5
char * s_gets(char * str, int n);
void printChoice(void);
void get_firstletter(int * ch);
void printStrs(int lines, int size, char str[lines][size]);
void printStrPtrs(char * str[], int lines);
void sortASCII(char * str[], int lines);
void sortStrLen(char * str[], int lines);
void sortWordLen(char * str[], int lines);

int main(void)
{
    char str[LINES][SIZE];
    char * strptr[LINES];
    int i = 0;
    int choice;
    
    /* input strings */
    printf("Enter up to %d lines of strings.\n", LINES);
    printf("To stop, press the Enter key at the a line's start.\n");
    // while (s_gets(str[i], SIZE), 
    while (i < LINES && s_gets(str[i], SIZE) != NULL &&
           str[i][0] != '\0')
    {
        strptr[i] = str[i];
        i++;
    }
    printf("Input %d lines\n", i);

        

    /* select action */    
    printChoice();
    while (get_firstletter(&choice),
           choice != 'q')
    {
        if (choice < 'a' || choice > 'd')
            printf("Please enter a valid choice: ");
        else
        {
            switch (choice)
            {
                case 'a':
                    printStrs(i, SIZE, str);
                    break;
                case 'b':
                    sortASCII(strptr, i);
                    printStrPtrs(strptr, i);
                    break;
                case 'c':
                    sortStrLen(strptr, i);
                    printStrPtrs(strptr, i);
                    break;
                case 'd':
                    sortWordLen(strptr, i);
                    puts("====");
                    printStrPtrs(strptr, i);
                    break;
                default: 
                    puts("Oops!");
                    break;
            }

            printChoice();
        } 

        
    }

    puts("\n\n====================================================");
    puts("Bye.");




    return 0;
}

char * s_gets(char * str, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(str, n, stdin);
    if (ret_val)
    {
        while (str[i] != '\n' && str[i] != '\0')
            i++;
        if (str[i] == '\n')
            str[i] = '\0';
        else 
            while (getchar() != '\n')
                continue; 
    }
    return ret_val;
}

void printChoice(void)
{
    puts("\n====================================================");
    puts("What do you want to do for your strings:");
    puts("a) print the original list of string");
    puts("b) print the strings in ASCII collating sequence");
    puts("c) print the strings in order of increasing length");
    puts("d) print the strings in order of the length of the");
    puts("   first word in the string");
    puts("q) quit\n");
    printf("Enter your choice: ");
}

void get_firstletter(int * ch)
{
    while (isspace(*ch = getchar()))
    {
        putchar(*ch);
        continue;
    }

    while (getchar() != '\n')
    {
        continue;
    }   
}

void printStrs(int lines, int size, char str[lines][size])
{
    for (int i = 0; i < lines; i++)
        puts(str[i]);
}

void printStrPtrs(char * str[], int lines)
{
    for (int i = 0; i < lines; i++)
        puts(str[i]);
}


void sortASCII(char * str[], int lines)
{
    int i, j;
    char * temp;

    for (i = 0; i < lines - 1; i++)
        for (j = i + 1; j < lines; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
}

void sortStrLen(char * str[], int lines)
{
    int head, seek;
    char * temp;

    for (head = 0; head < lines - 1; head ++)
        for (seek = head + 1; seek < lines; seek++)
            if (strlen(str[head]) > strlen(str[seek]))
            {
                temp = str[head];
                str[head] = str[seek];
                str[seek] = temp;
            }
}

void sortWordLen(char * str[], int lines)
{
    int len[lines];
    int i, j, count;
    int head, seek;
    char * temp;
    int tempint;

    for (i =0; i < lines; i++)
    {
        for (count = 0, j = 0; !isspace(str[i][j]) && str[i][j] != '\0'; j++)
            count++;
        len[i] = count;
        // printf("%d\n", count);
    }

    for (head = 0; head < lines - 1; head++)
        for (seek = head + 1; seek < lines; seek++)
        {
            if (len[head] > len[seek])
            {
                tempint = len[head];
                len[head] = len[seek];
                len[seek] = tempint;

                temp = str[head];
                str[head] = str[seek];
                str[seek] = temp;
            }
        }

}
