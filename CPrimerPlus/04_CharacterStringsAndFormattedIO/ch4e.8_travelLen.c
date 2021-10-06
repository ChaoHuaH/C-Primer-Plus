/* travelLen.c */
#include <stdio.h>
#define G2L 3.785
#define M2K 1.609


int main(void)
{
    float mile;
    float gallon;
    float liter;
    float km;

    printf("How many miles have your traveled? ");
    scanf("%f", &mile);
    printf("How many gallons of gas have you consumed? ");
    scanf("%f", &gallon);
    printf("Miles per gallon: %.1f\n", mile/gallon);
    
    liter = G2L * gallon;
    km = M2K * mile;
    printf("Liters per 100 kilometers: %.1f\n", 100 * liter / km);
    printf("\n");

    return 0;
}