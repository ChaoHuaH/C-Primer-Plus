/* printAge.c
print age in second
*/
#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("= %d seconds\n", age * 365 * 24 * 60 * 60);

}