/* printName.c
ask to enter name
print the last name first 
and print the first name
*/
#include <stdio.h>

int main(void)
{
    char first[40];
    char last[40];

    printf("Enter you first name and last name\n");
    scanf("%s %s", first, last);
    printf("Your last name: %s\n", last);
    printf("Your first name: %s\n", first);
    
    return 0;
}