/* guess.c
an inefficient and faulty number-guesser
*/
#include <stdio.h>

int main(void)
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess: ");
    printf("it.\n Respond with a y if y guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    // the getchar would also get the \n
    // and print two guesses at once 
    // beasue when you enter n and press enter
    // the getchar() receives an 'n' and a '\n' 
    // which it would think '\n' is the second respond
    while (getchar() != 'y')
        printf("Well, then, is it %d?\n", ++guess);
    printf("I knew I counld do it!\n");

    return 0;
}