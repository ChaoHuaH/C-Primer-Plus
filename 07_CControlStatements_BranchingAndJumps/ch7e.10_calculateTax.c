/* calculateTax.c */
#include <stdio.h>
#define BASE_TAX 0.15
#define OVER_TAX 0.28

void printCate(void);

int main(void)
{
    int status, category;
    float boundary, income, tax;

    printCate();
    while (status = scanf("%d", &category), 
            category < 5 && category > 0)
    {
        // if enter invalid value
        if (status != 1)
        {
            scanf("%*s");
            printf("Please enter integer from 1 to 4: ");
            continue;
        }

        // use category to decide the boundary
        switch (category)
        {
            case 1: 
                boundary = 17850.0; break;
            case 2: 
                boundary = 23900.0; break;
            case 3:
                boundary = 29750.0; break;
            case 4:
                boundary = 14875.0; break;
        }

        // calculate the Tax
        printf("Enter your income: ");
        while (scanf("%f", &income) != 1 ||
                income < 0)
        {
            if (income < 0)
                printf("Please enter a positive income: ");
            else 
            {
                scanf("%*s");
                printf("Enter a valid income: ");
            }
        }
        if (income <= boundary)
            tax = income * BASE_TAX;
        else 
            tax = boundary * BASE_TAX + (income - boundary) * OVER_TAX;
        
        // print results
        printf("\nYour are category %d.\n", category);
        printf("Your income is %.1f.\n", income);
        printf("Tax = %.1f\n", tax);


        printCate();
    }
    printf("Done\n");
}


void printCate(void)
{
    printf("\n***************************************\n");
    printf("1) Single         2) Head of Household\n");
    printf("3) Married, Joint 4) Married, Separate\n");
    printf("enter other number to quit\n");
    printf("***************************************\n");
    printf("Enter your tax category: ");

}

