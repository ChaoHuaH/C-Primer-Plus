/* scanfval.c
finding scanf()'s return value
= the number of successfully input

if didn't input any value successfully
then return 0
*/
#include <stdio.h>

int main(void)
{
    int i, j;
    int rv;

    printf("Enter an integer: ");
    rv = scanf("%d", &i);
    printf("The scanf() function return %d.\n",
            rv);

    printf("Enter two integers: ");
    rv = scanf("%d %d", &i, &j);
    printf("The scanf() function return %d.\n",
            rv);



    return 0;
}
