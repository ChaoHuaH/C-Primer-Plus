/* stringf.c
string formatting
*/
#include <stdio.h>
#define BLURB "Authentic initation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);  // .5 means only print 5 chars
    printf("[%-24.5s]\n", BLURB);

    return 0;
}