/* convertYear2Day.c
conver age from year to days
*/
#include <stdio.h>

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your are %d years old\n", age);
    printf("equivalent to %d days\n", age * 365);

    return 0;
}