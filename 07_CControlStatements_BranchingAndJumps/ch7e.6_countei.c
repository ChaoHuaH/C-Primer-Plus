/* countei.c
count the number of 'ei'
# to quit
*/
#include <stdio.h>

int main(void)
{
    int count = 0; // the number of ei
    char ch_now;
    char ch_pre = '.';  // set ch_pre other than 'e'

    printf("Enter some text: \n");
    while ((ch_now = getchar()) != '#')
    {
        if (ch_now == 'i' && ch_pre == 'e')
            count ++;
        
        ch_pre = ch_now;        
    }
    printf("There are %d 'ei' in the text.\n", count);

    return 0;
}