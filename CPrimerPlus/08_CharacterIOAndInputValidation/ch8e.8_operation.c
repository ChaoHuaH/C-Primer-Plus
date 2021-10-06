/* operation.c
shows a menu with choice of: 
addition,subtraction, multiplication, or division. 
asks for two numbers, then performs the requested operation. 
*/
#include <stdio.h>
#include <ctype.h>
char get_first(void);
float get_number(void);
void printChoice(void);
void enterNums(float *num1, float *num2, int choice);

int main(void)
{
    int choice;
    float num1, num2;

    printChoice();
    while ((choice = get_first()) != 'q')
    {
        if (choice != 'a' && choice != 's' &&
            choice != 'm' && choice != 'd')
        {
            printf("Please enter only a, s, m, d, or q: ");
            continue;
        }

        enterNums(&num1, &num2, choice);
        switch (choice)
        {
        case 'a':
            printf("%.1f + %.1f = %.1f\n",
                   num1, num2, num1 + num2);
            break;
        case 's':
            printf("%.1f - %.1f = %.1f\n",
                   num1, num2, num1 - num2);
            break;
        case 'm':
            printf("%.1f * %.1f = %.1f\n",
                   num1, num2, num1 * num2);
            break;
        case 'd':
            printf("%.1f / %.1f = %.1f\n",
                   num1, num2, num1 / num2);
            break;
        }
        printChoice();
    }
    printf("\nBye.\n");
}

char get_first(void)
{
    int ch;
    while (isspace(ch = getchar()))
        continue;
    while (getchar() != '\n')
        continue;

    return ch;
}

float get_number(void)
{
    float num;
    while (scanf("%f", &num) != 1)
    {
        scanf("%*s");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }

    return num;
}

void printChoice(void)
{
    printf("\nEnter the operation of your choice:\n");
    printf("a. add            s. subtract\n");
    printf("m. multiply       d. divide\n");
    printf("q. quit\n");
}

void enterNums(float *num1, float *num2, int choice)
{
    printf("Enter first number : ");
    *num1 = get_number();
    printf("Enter second number: ");
    while (*num2 = get_number(),
           choice == 'd' &&
               *num2 == 0)
    {
        printf("Enter a number other than 0: ");
    }
}
