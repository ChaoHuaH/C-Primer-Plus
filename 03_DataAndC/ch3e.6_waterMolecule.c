/* waterMolecule.c
how many water molecules in ? quart
*/
#include <stdio.h>

int main(void)
{
    int quart;
    printf("Enter an integer: ");
    scanf("%d", &quart);
    printf("%d quarts have %e water molecules\n",
           quart, quart * 950 / 3e-23);

    return 0;
}