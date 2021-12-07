/* rain.c
use function to rewrite 10.7_rain.c

finds yearly totals, yearly average, and monthly average 
for several years of rainfall data
*/
#include <stdio.h>
#define YEARS 5
#define MONTHS 12


void yearly(int y, int m, const float rain[y][m])
{
    float total, subtot;
    int i, j;

    printf(" YEAR     RAINFALL (inches)\n");
    for (i = 0, total = 0; i < y; i++)
    {
        for (j = 0, subtot = 0; j < m; j++)
            subtot += rain[i][j];      
        printf("%5d %15.1f\n", 2010 + i, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n",
        total/ y);

}

void monthly(int y, int m, const float rain[y][m])
{
    float total, subtot;
    int i, j;

    printf("MONTHLY AVERAGES:\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0, subtot = 0; j < y; j++)
            subtot += rain[j][i];
        printf("%4.1f ", subtot/y);
    }
    printf("\n");
}


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

    yearly(YEARS, MONTHS, rain);
    monthly(YEARS, MONTHS, rain);

    return 0;
}