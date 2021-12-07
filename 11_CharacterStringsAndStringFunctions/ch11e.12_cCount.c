/* cCount.c
Write a program that reads input up to EOF and reports the number of words,
the number of uppercase letters, the number of lowercase letters, the number
of punctuation characters, and the number of digits. Use the ctype.h family
of functions.
*/
#include <stdio.h>
#include <ctype.h>
#define SIZE 20

int main(void)
{
    char * str;
    int i;
    int inWord = 0;
    int n_line, n_word, n_char, n_upper, n_lower, n_punct, n_num, n_other;
    n_line = n_word = n_char = n_upper = n_lower = n_punct = n_num = n_other = 0;

    while (fgets(str, SIZE, stdin) != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            n_char++;

            if (inWord == 0 && !isspace(str[i]))
            {
                n_word++;
                inWord = 1;
            }
            if (isspace(str[i]) || ispunct(str[i]))
                inWord = 0;

            if (isupper(str[i]))
                n_upper++;
            else if (islower(str[i]))
                n_lower++;
            else if (ispunct(str[i]))
                n_punct++;
            else if (isnumber(str[i]))
                n_num++;
            else
                n_other++;
        }
        n_line++;
    }
    puts("\n================================");
    printf("Input %d lines\n", n_line);
    printf("number of words                  : %d\n", n_word);
    printf("number of characters             : %d\n", n_char);
    printf("number of uppercase letters      : %d\n", n_upper);
    printf("number of lowercase letters      : %d\n", n_lower);
    printf("number of numbers                : %d\n", n_num);
    printf("number of punctuation characters : %d\n", n_punct);
    printf("number of other characters       : %d\n", n_other);

    return 0;
}
