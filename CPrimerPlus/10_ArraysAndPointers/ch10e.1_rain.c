/* rain.c
finds yearly totals, yearly average, and monthly average 
for several years of rainfall data
(use pointer)
*/
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

int main(void)
{
    // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] = 
    {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    float subtot, total;

    printf(" YEAR     RAINFALL (inches)\n");
    const float (*ptr)[MONTHS];
    int idx;
    total = 0;
    ptr = rain;
    while (ptr < rain + YEARS)
    {
        idx = 0;
        subtot = 0;
        while (idx < MONTHS)
        {
            subtot += *(*ptr + idx);
            idx++;
        }
        printf("%5ld %15.1f\n", 2010 + (ptr - rain), subtot);
        total += subtot;
        ptr++;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",
        total/ YEARS);

    printf("MONTHLY AVERAGES:\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
    int y, m;
    m = 0;
    total = 0;
    while (m < MONTHS)
    {
        for (y = 0, subtot = 0; y < YEARS; y++)
        {
            subtot += *(*(rain + y) + m);
            // printf("%f\n", *(*(rain + y) + m));
        }
        printf("%4.1f ", subtot/YEARS);
        m++;
    }
    printf("\n\n");

    return 0;
}