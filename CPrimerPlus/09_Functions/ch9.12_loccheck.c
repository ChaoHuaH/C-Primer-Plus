/* loccheck.c
checks to see where variables are stored
*/
#include <stdio.h>
void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;  // local to main

    printf("In main(), pooh = %d and &pooh = %p\n",
         pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n",
        bah, &bah);
    mikado(pooh);

    return 0;
}

void mikado(int bah)
{
    int pooh = 10; // local to mikado()

    printf("In mikado(), pooh = %d and &pooh = %p\n",
        pooh, &pooh);
    printf("in midado(), bah = %d and &bah = %p\n",
        bah, &bah);
}