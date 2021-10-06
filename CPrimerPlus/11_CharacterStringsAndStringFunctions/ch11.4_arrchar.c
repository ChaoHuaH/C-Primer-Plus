/* arrchar.c
array of pointers, array of atrings
*/
#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    const char * mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately", "Stasshing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    char yourtaltents[LIM][SLEN] = {
        "Walking in a straight line", 
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };
    int i;

    puts("Let's compare taltens.");
    printf("%-36s %-25s\n", "My Talents", "Your TAlents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtaltents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtaletns: %zd\n",
            sizeof mytalents, sizeof yourtaltents);
    
    return 0;
}