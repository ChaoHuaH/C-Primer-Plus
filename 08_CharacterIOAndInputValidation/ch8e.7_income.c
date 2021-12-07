/* income.c
ask to input working hours per week
ask to choose the base salary from 4 options
export the total salary, tax, and net income
*/
#include <stdio.h>
#include <ctype.h>
#define OVER_HOUR  40
#define LV1   300
#define LV2   450
#define RATE1 0.15     // tax rate under LV1
#define RATE2 0.20     // tax rate exceed LV1 and under LV2
#define RATE3 0.25     // text rate exceed LV2
char get_first(void);

int main(void)
{
    int choose;
    float base_sal, over_sal;

    int hours;
    float salary, tax, income;


    // ask to choose the base salary
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a)  $8.75/hr                        b)  $9.33/hr\n");
    printf("c) $10.00/hr                        d) $11.20/hr\n");
    printf("q) quit\n");
    printf("*****************************************************************\n");

    choose = get_first();
    while (choose != 'q')
    {
        if ((choose < 'a' || choose > 'd'))
        {
            printf("please enter a, b, c, d, or q: ");
            choose = get_first();
            continue;
        }

        switch (choose)
        {
            case 'a': base_sal = 8.75; break;
            case 'b': base_sal = 9.33; break;
            case 'c': base_sal = 10.0; break;
            case 'd': base_sal = 11.20; break;
        }
        over_sal = base_sal / 2;

        // calculate the salary
        salary = tax = 0;
        printf("Enter your working hours this week: ");
        while (scanf("%d", &hours) != 1)
        {
            scanf("%*s");
            printf("Please enter a valid nubmer: ");
        }
            
        if (hours <= OVER_HOUR)
            salary += hours * base_sal;
        else 
        {
            salary += OVER_HOUR * base_sal;
            salary += (hours - OVER_HOUR) * over_sal;
        }

        // calculate the tax
        if (salary <= LV1)
        {
            tax += salary * RATE1;
        }
        else if (salary <= LV2)
        {
            tax += LV1 * RATE1;
            tax += (salary - LV1) * RATE2;
        }
        else 
        {
            tax += LV1 * RATE1;
            tax += (LV2 - LV1) * RATE2;
            tax += (salary - LV2) * RATE3;
        }

        // income = salary - tax
        income = salary - tax;

        // print the results
        printf("The total salary is %.1f\n", salary);
        printf("The tax is %.1f\n", tax);
        printf("The net income is %.1f\n", income);

        // new loop
        printf("\n*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a)  $8.75/hr                        b)  $9.33/hr\n");
        printf("c) $10.00/hr                        c) $11.20/hr\n");
        printf("q) quit\n");
        printf("*****************************************************************\n");

        choose = get_first();
    }
    printf("Done\n");

    return 0;
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