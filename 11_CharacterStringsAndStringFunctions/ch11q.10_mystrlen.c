/* strlen.c
write the function strlen by myself
*/
#include <stdio.h>
#include <string.h>
int mystrlen(const char * str);

int main(void)
{
    char * string = "This is a string.";
    
    puts(string);
    printf("strlen(string)   = %lu\n", strlen(string));
    printf("mystrlen(stirng) = %d\n", mystrlen(string));

    return 0;
}

int mystrlen(const char * str)
{
    int count = 0;
    // while (str[count] != '\0')
    while(str[count])
        count++;        
    
    return count;
}