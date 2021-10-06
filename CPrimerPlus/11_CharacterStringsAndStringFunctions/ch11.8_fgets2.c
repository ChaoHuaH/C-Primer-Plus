/* fgets2.c
using fgest() and fputs()
*/
#include <stdio.h>
#define STELN 10

int main(void)
{
    char words[STELN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STELN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done");

    return 0;
}