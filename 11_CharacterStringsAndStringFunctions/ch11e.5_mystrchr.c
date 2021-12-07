/* mystrchr.c
Design and test a function that searches the string specified by the first
function parameter for the first occurrence of a character specified by the
second function parameter. Have the function return a pointer to the
character if successful, and a null if the character is not found in the
string. (This duplicates the way that the library strchr() function works.)
Test the function in a complete program that uses a loop to provide input
values for feeding to the function.
*/
#include <stdio.h>
#include <string.h>
#define LIMIT 10
char *mystrchr(const char *str, char c);
// char * s_gets(char * st, int n);

int main(void)
{
    char input[LIMIT];
    char *myfind;
    char *find;

    printf("Enter some text with maximum %d chars\n", LIMIT);
    while (fgets(input, LIMIT, stdin) &&
           input[0] != '\n')
    // while (s_gets(input, LIMIT) &&
    //        input[0] != '\n')
    {
        printf("=========================================\n");
        myfind = mystrchr(input, 'c');
        find = strchr(input, 'c');

        if (find == NULL || myfind == NULL)
        {
            printf("It's NULL\n");
        }
        else
        {
            printf("mystrchr: %p, * = %c, idx = %ld\n", myfind, *myfind, myfind - input);
            printf("strchr  : %p, * = %c, idx = %ld\n", find, *find, find - input);
        }
        printf("=========================================\n");
    }
    puts("Bye!");

    return 0;
}

char *mystrchr(const char *str, char c)
{
    while (*str != c && *str != '\0')
    {
        str++;
        // continue;
    }

    if (*str == '\0')
        return NULL;
    else
        return (char *)str;
}

// char * s_gets(char * st, int n)
// {
//     char * ret_val;
//     int i = 0;

//     ret_val = fgets(st, n, stdin);
//     if (ret_val)
//     {
//         while (st[i] != '\n' && st[i] != '\0')
//             i++;
//         if (st[i] == '\n')
//             st[i] = '\0';
//         else
//             while (getchar() != '\n')
//                 continue;
//     }
//     return ret_val;
// }