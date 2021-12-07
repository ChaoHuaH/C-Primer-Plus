/* inch2cm.c
convert inches to cm
*/
#include <stdio.h>

int main(void)
{
    float inch;
    printf("Enter you height in inch: ");
    scanf("%f", &inch);
    printf("Your height is %.2f cm\n", 2.54 * inch);
}