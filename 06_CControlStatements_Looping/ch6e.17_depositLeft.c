/* depositLeft.c
deposit $BEBIN dollars in a bank
with compound interest INTEREST
withdraw %WD at the end of every year  
how many years will it takes for deposit becoming 0
*/
#include <stdio.h>
#define BEGIN 1e6
#define INTEREST 0.08
#define WD 1e5

// double compound(double begin, double rate, int year);

int main(void)
{ 
    double deposit = BEGIN;
    int i = 0;

    printf(" year      deposit\n");
    do {
        // printf("%5d %10.2e\n", i, deposit);
        printf("%5d %12.1f\n", i, deposit);
        deposit *= (1 + INTEREST);
        deposit -= WD;
        i++;
    } while (deposit > 0);
    printf("===================\n");
    printf("%5d %12.1f\n", i, deposit);

    return 0;
}


// double compound(double begin, double rate, int year)
// {
//     double invest = begin;
//     for (int i = 0; i < year; i++)
//         invest *= (1 + rate);
    
//     return invest;
// }