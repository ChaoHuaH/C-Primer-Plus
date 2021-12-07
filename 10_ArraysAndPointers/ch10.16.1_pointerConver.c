/* pointerConvert.c

*/
#include <stdio.h>

int main(void)
{
    //
    int n = 5;
    double x;
    int *p1 = &n;
    double *pd = &x;

    printf(" n = %14d,   x = %.2f\n", n, x);
    printf("p1 = %p,  pd = %p\n", p1, pd);

    x = n;      // implicit type conversion - valid
    // pd = p1; // compile-time error - invalid
    printf("\nafter x = n\n");
    printf(" n = %14d,   x = %.2f\n", n, x);
    printf("p1 = %p,  pd = %p\n\n", p1, pd);
    

    // point to different types is not allowed
    int * pt;       // points to int
    int (*pa)[3];   // points to an array with 3-int unit 
    int ar1[2][3];  // points to an array with 3-int unit
    int ar2[3][2];  // points to an array with 2-int unit
    int ** p2;      // a pointer to a pointer points to int

    pt = &ar1[0][0];  // both pointer-to-int
    pt = ar1[0];      // both pointer-to-int
    // pt = ar1;      // not valid
    pa = ar1;         // both pointer-to-int[3]
    // pa = ar2;      // not valid
    p2 = &pt;         // both pointer-to-int *
    *p2 = ar2[0];     // both pointer-to-int
    // p2 = ar2;      // not valid


    // 
    int a = 20;
    const int b = 23;
    int * pt1 = &a;
    const int * pt2 = &b;
    const int ** ppt2;

    pt1 = pt2;      // not safe - assigning const to non-const
    pt2 = pt1;      // valid    - assigning non-const to const
    ppt2 = &pt1;    // not safe - assigning nested pointer types


    // dereference
    const int ** pa2;
    int * pa1;
    const int nn = 13;
    printf(" nn = %d\n", nn);
    printf("pa1 = %p\n", pa1);
    printf("pa2 = %p\n", pa2);
    pa2 = &pa1;  // allowed, but const qualifier disregarded
    *pa2 = &nn;  // valid, both const, but sets pa1 to point at nn
    *pa1 = 10;   // valid, but tries to change const nn
    printf("====================\n");
    printf(" nn = %d\n", nn);
    printf("pa1 = %p\n", pa1);
    printf("pa2 = %p\n", pa2);

    return 0;
}
