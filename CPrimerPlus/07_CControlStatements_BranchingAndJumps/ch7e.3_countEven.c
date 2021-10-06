/* countEven.c
count the number of evens and odds
0 to quit
print the counts and averages
*/
#include <stdio.h>

int main(void)
{
    int num;
    int status;
    int n_even, n_odd;
    int tot_even, tot_odd;

    n_even = n_odd = 0;  
    tot_even = tot_odd = 0;    

    printf("Enter some integers\n");
    // satus = scanf("%d", &num);
    while ( status = scanf("%d", &num), num != 0)
    {
        if (status != 1) // if not integer
        {
            scanf("%*s");
            printf("please enter integer: \n");
            continue;
        }

        if (num %2 == 0)
        {
            n_even++;
            tot_even += num;
        }
        else 
        {
            n_odd++;
            tot_odd += num;
        }
    }
    printf("There are %3d evens, and the average is %4.1f\n",
            n_even, (float) tot_even / n_even);
    printf("There are %3d odds,  and the average is %4.1f\n",
            n_odd, (float) tot_odd / n_odd);

    return 0;    
}