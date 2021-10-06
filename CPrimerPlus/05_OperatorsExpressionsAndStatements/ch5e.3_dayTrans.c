/* dayTrans.c
transform days to weeks and days
*/
#include <stdio.h>
#define D_PER_W 7

int main(void)
{
    int days, dw_weeks, dw_days;

    printf("Enter days: ");
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d days are %d weeks, %d days\n",
                days, days / D_PER_W, days % D_PER_W);
        
        printf("Enter days: ");
        scanf("%d", &days);
    }
    printf("Done!\n");

    return 0;
}