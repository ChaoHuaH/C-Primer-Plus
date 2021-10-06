/* myatoi.c
Use the character classification functions to prepare an implementation of
atoi(); have this version return the value of 0 if the input string is not a
pure number.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
int myatoi(char * str);
int strtoui(char * str, int len);

int main(void)
{
    printf("myatoi(3)       = %d\n", myatoi("3"));
    printf("myatoi(23)      = %d\n", myatoi("23"));
    printf("myatoi(978)     = %d\n", myatoi("978"));
    printf("myatoi(-2897)   = %d\n", myatoi("-2897"));
    printf("myatoi(12a)     = %d\n", myatoi("12a"));
    printf("myatoi(-987bbd) = %d\n", myatoi("-987bbd"));
    printf("myatoi(-a)      = %d\n", myatoi("-a"));
    printf("myatoi(oiaa)    = %d\n", myatoi("oiaa"));
    printf("myatoi(oi12)    = %d\n", myatoi("oi12"));

    return 0;
}

int myatoi(char * str)
{
    int len;
    int str_len = strlen(str);
    char numbs[str_len];
    int ret;
    if (str[0] == '-')
    {
        len = 1;
        while (isnumber(str[len]))
        {
            numbs[len - 1] = str[len];
            len++;
        }
        
        if (len > 1) // havae at least on number 
        {
            // the length of the number is len - 1 (exclude the '-)
            len -= 1;
            ret = -strtoui(numbs, len);

        }
        else 
            return 0; // not a number
    } 
    else if (isnumber(str[0]))
    {
        len = 0;
        while (isnumber(str[len]))
        {
            numbs[len] = str[len];
            len++;
        }

        if (len > 0)
            ret = strtoui(numbs, len);
    }
    else // first char is not '-' and not a number
        return 0;

    return ret;
}

int strtoui(char * str, int len)
{
    int i;
    double doub = 0;
    for (i = 0; i < len; i++)
        doub += (str[i] - '0') * pow(10, len - 1 - i);
    
    return (int) doub;
}