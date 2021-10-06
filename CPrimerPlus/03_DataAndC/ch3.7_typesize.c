/* typesize.c
prints out type sizes
*/
#include <stdio.h>

int main(void)
{
    printf("Type int has as size of %zd bytes.\n", sizeof(int));
    printf("Type char has as size of %lu bytes.\n", sizeof(char));
    printf("Type long has as size of %zd bytes.\n", sizeof(long));
    printf("Type long long has as size of %zd bytes.\n", sizeof(long long));
    printf("Type double has as size of %zd bytes.\n", sizeof(double));
    printf("Type long double has as size of %zd bytes.\n", sizeof(long double));

    return 0;
}