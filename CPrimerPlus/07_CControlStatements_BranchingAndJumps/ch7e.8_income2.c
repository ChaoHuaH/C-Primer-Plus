/* income2.c
ask to input working hours per week
ask to choose the base salary from 4 options
export the total salary, tax, and net income
*/
#include <stdio.h>
#define OVER_HOUR  40
#define LV1   300
#define LV2   450
#define RATE1 0.15     // tax rate under LV1
#define RATE2 0.20     // tax rate exceed LV1 and under LV2
#define RATE3 0.25     // text rate exceed LV2

int main(void)
{
    int choose, status;
    float base_sal, over_sal;

    int hours;
    float salary, tax, income;


    // ask to choose the base salary
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1)  $8.75/hr                        2)  $9.33/hr\n");
    printf("3) $10.00/hr                        4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");

    status = scanf("%d", &choose);
    while (choose != 5)
    {
        if (status != 1 || (choose < 1 || choose > 5))
        {
            if (status != 1) 
                scanf("%*s");
            printf("please enter integer from 1 to 5: ");
            status = scanf("%d", &choose);
            continue;
        }

        switch (choose)
        {
            case 1: base_sal = 8.75; break;
            case 2: base_sal = 9.33; break;
            case 3: base_sal = 10.0; break;
            case 4: base_sal = 11.20; break;
        }
        over_sal = base_sal / 2;

        // calculate the salary
        salary = tax = 0;
        printf("Enter your working hours this week: ");
        scanf("%d", &hours);
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
        printf("1)  $8.75/hr                        2)  $9.33/hr\n");
        printf("3) $10.00/hr                        4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");

        status = scanf("%d", &choose);
    }
    printf("Done\n");

    return 0;
}
