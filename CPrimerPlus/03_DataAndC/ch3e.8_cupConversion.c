/* cupconversion.c
convert cup into pint, ounce, tablespoon
*/
#include <stdio.h>

int main(void)
{
    float cup;

    printf("Enter cup: ");
    scanf("%f", &cup);
    printf("equal to %.2f pint\n", cup/2);
    printf("equal to %.2f ounce\n", cup * 8);
    printf("equal to %.2f tablespoon\n", cup * 16);

    return 0;
}