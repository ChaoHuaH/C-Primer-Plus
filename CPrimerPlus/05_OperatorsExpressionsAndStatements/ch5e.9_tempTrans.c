/* tempTrans.c
transform temperature from Fahrenheit to Celsius and Kelvin
*/
#include <stdio.h>

void Temperatures(double fah);

int main(void)
{
    double fah;

    printf("Enter a temperature in Fahrenheit: ");
    while (scanf("%lf", &fah) == 1)
    {
        Temperatures(fah);
        printf("Enter a temperature in Fahrenheit: ");
    }

    return 0;
}

void Temperatures(double fah)
{
    const double CEL_KEL = 273.16;
    double cel, kel;
    cel = 5.0 / 9.0 * (fah - 32.0);
    kel = cel + CEL_KEL;
    
    printf("%-6.2lf Fahrenheit equivalent to \n", fah);
    printf("%-6.2lf Celsius\n", cel);
    printf("%-6.2lf Kelvin\n", kel);
}