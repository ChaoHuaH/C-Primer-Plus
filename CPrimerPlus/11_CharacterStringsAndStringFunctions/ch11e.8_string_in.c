/* string_in.c
// Write a function called string_in() that takes two string pointers as
// arguments. If the second string is contained in the first string, have the
// function return the address at which the contained string begins. For
// instance, string_in("hats", "at") would return the address of the a in hats.
// Otherwise, have the function return the null pointer. Test the function in a
// complete program that uses a loop to provide input values for feeding to the
// function.
*/
#include <stdio.h>
char *string_in(char *str, char *target);

int main(void)
{
    char string[50] = "Ihaveahat";
    char targ[10] = "at";
    char *match;

    match = string_in(string, targ);
    printf("target: %p\n", targ);
    printf("string: %p\n", string);
    printf("match : %p\n", match);
    printf("%ld\n", match - string);

    return 0;
}

char *string_in(char *str, char *target)
{
    int string_in = 0; // flag to check whether string in
    char * match;
    char * target_move = target;

    while (*str != '\0')
    {
        if (*str != *target_move)
        {
            string_in = 0;
            target_move = target;
        }
        else
        {
            if (string_in == 0)
            {
                string_in = 1;
                match = str;
            }
            target_move++;
        }
        
        if (*target_move == '\0')
            break;
        str++;
    }

    if (string_in == 1)
        return match;
    else 
        return NULL;
}