/* while1.c
watch your braces
*/
#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;  // not in the while loop, therefore this is a infinite loop
    printf("That's all this program does\n");

    return 0;
}