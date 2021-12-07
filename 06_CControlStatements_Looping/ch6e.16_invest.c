/* invest.c
A invests $BEGIN with simple interest 10%
B invests $BEGIN with compound interest 5%
calculate the years needed for B's investment excess A's
*/
#include <stdio.h>
#define BEGIN 100
#define SM_RATE 0.1
#define CM_RATE 0.05

double simple(double, double, int);
double compound(double, double, int);

int main(void)
{
    printf("year  simple  compound  difference\n");
    double sim, com;
    int i = 0;
    do {
        sim = simple(BEGIN, SM_RATE, i);
        com = compound(BEGIN, CM_RATE, i);
        printf("%3d %8.2lf %8.2lf %8.2lf\n", 
                i, sim, com, sim - com);
        i++;
    } while (com <= sim);
    printf("================\nTake %d years.\n\n", i-1);

    return 0;
}

double simple(double begin, double rate, int year)
{
    double invest = begin;
    // for (int i = 0; i < year; i++)
    //     invest += begin * rate;
    invest += begin * rate * year;
    
    return invest;
}

double compound(double begin, double rate, int year)
{
    double invest = begin;
    for (int i = 0; i < year; i++)
        invest *= (1 + rate);
    
    return invest;
}