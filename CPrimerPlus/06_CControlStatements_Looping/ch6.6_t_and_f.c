/* t_and_f.c
true and false values in C
*/
#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("ture = %d; fasle = %d \n", 
            true_val, false_val);
    
    return 0;
}