/* income.c
ask to input working hours per week
export the total salary, tax, and net income
*/
#include <stdio.h>
#define BASE_SAL   10.0
#define OVER_HOUR  40
#define OVER_SAL   10.0 / 2  // when hours > 40, overtime salary = base/2
#define LV1   300
#define LV2   450
#define RATE1 0.15     // tax rate under LV1
#define RATE2 0.20     // tax rate exceed LV1 and under LV2
#define RATE3 0.25     // text rate exceed LV2

int main(void)
{
    int hours;
    float salary, tax, income;
    salary = tax = 0;

    // calculate the salary
    printf("Enter your working hours this week: ");
    scanf("%d", &hours);
    if (hours <= OVER_HOUR)
        salary += hours * BASE_SAL;
    else 
    {
        salary += OVER_HOUR * BASE_SAL;
        salary += (hours - OVER_HOUR) * OVER_SAL;
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

    printf("The total salary is %.1f\n", salary);
    printf("The tax is %.1f\n", tax);
    printf("The net income is %.1f\n", income);

    return 0;
}
