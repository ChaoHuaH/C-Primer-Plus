/* varwid.c
uses variable-width ouptut field
*/
#include <stdio.h>
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("               1234567890\n");
    printf("The number is :%*d:\n", width, number);

    printf("Now enter a width and precision:\n");
    scanf("%d %d", &width, &precision);
    printf("        1234567890\n");
    printf("Weight :%*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}