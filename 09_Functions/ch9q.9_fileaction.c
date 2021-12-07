#include <stdio.h>

void printChoices(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files     2) move files\n");
    printf("3) remove files   4) quit\n");
    printf("Enter the number of your choice: ");
}

int returnChoice(int lower, int upper)
{
    int status, input;
    while ( (status = scanf("%d", &input)) != 1 || 
        input < lower || input > upper )
    {
        if (status != 1)
            scanf("%*s");
        printChoices();
    }

    return input;
}

int main(void)
{
    printChoices();
    int output = returnChoice(1, 6);
    printf("Your choice is: %d\n", output);

    return 0;
}