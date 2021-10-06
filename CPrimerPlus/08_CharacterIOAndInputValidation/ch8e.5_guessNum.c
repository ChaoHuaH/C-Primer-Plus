/* guessNum.c
ask program to guest a number
*/
#include <stdio.h>
int get_first(void);

int main(void)
{
    int min = 1;
    int max = 100;
    int guess = 50;
    int answer;

    printf("\nPick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with:\n");
    printf("'y' if guess is right, \n");
    printf("'b' if the answer is bigger than the guess, \n");
    printf("'s' if the answer is smaller than the guess. \n\n");
    printf("Uh...is your number %d?\n", guess);

    
    while ((answer = get_first()) != 'y')
    {
        switch (answer)
        {
            case 'b':
                min = guess;
                break;               
            case 's':
                max = guess;
                break;
            default:
                printf("Please answer only y, b, and s.\n");
                continue;

        }
        printf("min: %d, max: %d\n", min, max);
        guess = (min + max)/2;
        printf("Well, then, is it %d?\n", guess); 
    }
    printf("I knew I counld do it!\n");

    return 0;
}


int get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;
}