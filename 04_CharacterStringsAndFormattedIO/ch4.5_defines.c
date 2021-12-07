/* defines.c
uses defined constants from limit.h and float.h
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("Some number limits from this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this sytstem.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smllest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}