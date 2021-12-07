/* timeTrans.c
transform minutes to hours and minutes
*/
#include <stdio.h>
#define MIN_PER_HOUR 60

int main(void)
{
    int mins, hm_mins, hm_hrs;

    printf("Please enter minutes: ");
    scanf("%d", &mins);
    while (mins > 0)
    {
        hm_hrs = mins / MIN_PER_HOUR;
        hm_mins = mins % MIN_PER_HOUR;
        printf("%d minutes = %d hours and %d minutes.\n",
                mins, hm_hrs, hm_mins);
        printf("Please enter minutes: ");
        scanf("%d", &mins);
    }
    printf("Done!\n");

    return 0;
}