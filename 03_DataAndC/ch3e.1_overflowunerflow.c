/* overflowunderflow.c
int overflow
float overflow 
flaot underflow
*/
#include <stdio.h>

int main(void)
{
    // integer overflow
    int i = 2147483647;
    unsigned j = 4294967295;
    printf("i = %d, i + 1 = %d, i + 2 = %d\n", i, i + 1, i + 2);
    printf("j = %u, j + 1 = %u, j + 2 = %u\n", j, j + 1, j + 2);

    // float overflow
    float toobig = 3.4e38;
    printf("toobig = %.2e\n", toobig);
    printf("toobig * 100.0f = %.2e\n", toobig * 100.0f);

    // float underflow
    float toosmall = 0.12345e-1;
    printf("toosmall = %e\n", toosmall);
    printf("toosmall = %f\n", toosmall);
    printf("toosmall/10 = %f\n", toosmall/10);
    printf("toosmall/100 = %f\n", toosmall/100);

    // round-off error
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("a = %f\n", a); // a shoud be 1

    float c, d;
    c = 2.0e4 + 1.0;
    d = c - 2.0e4;
    printf("d = %f\n", d); // d shoud be 1 

    return 0;
}