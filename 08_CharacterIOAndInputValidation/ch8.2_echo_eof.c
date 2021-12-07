/* echo_eof.c
repeats input to end of file

Redirect: input/output
./a.out < words.txt    // direct content of words.txt to echo_eof
                       // the program won't know the difference 
                       // between key in from keyboard or direct from a file
                       // there are all information flows.
./a.out > mywords.txt  // the key in texts will be save into mywords.txt

// copy myword to saveword
./a.out < mywords.txt > savewords.txt
./a.out > savewords.txt < mywords.txt

*/
#include <stdio.h>

int main(void)
{
    int ch;  // change from char to int
             // because char is unsigned integer from 0 to 255
             // and EOF = -1
             // therefore, it's not possible to use unsigned int(char) to present EOF
             // moreover, the return type of getchar() is also int

    while ((ch = getchar()) != EOF)
        putchar(ch);
    
    return 0;
}