/* cp2d.c
copy a two dimensional array
*/
#include <stdio.h>
#define COLS 3
#define ROWS 4

void copy_ptr(double * target, double * source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}


void cp2d( double target[][COLS], double source[][COLS], int r)
{
    for (int i = 0; i < r; i++)
        copy_ptr(target[i], source[i], COLS);
}


int main(void)
{
    typedef double ar3[COLS];
    typedef ar3 ar4x3[ROWS];

    ar4x3 target;
    ar4x3 source = (double [][COLS])
    {
        {1.1, 2.2, 3.3},
        {2.2, 3.3, 4.4},
        {3.3, 4.4, 5.5},
        {4.4, 5.5, 6.6}
    };
    printf("source: \n");
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
            printf("%.1f ", source[r][c]);
        printf("\n");
    }
    printf("\n");

    
    cp2d( target, source, ROWS);
    printf("===========\n");
    printf("target: \n");
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
            printf("%.1f ", source[r][c]);
        printf("\n");
    }
    printf("\n");



    return 0;
}