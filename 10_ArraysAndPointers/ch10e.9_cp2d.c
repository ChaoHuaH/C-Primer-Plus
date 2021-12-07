/* cp2d.c
copy a NxM array
print a rxc array from NxM array
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5

void cp2d(int n, int m, double target[n][m], double source[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            *(*(target + i) + j) = source[i][j];
}

void print2d(int r, int c, int n, int m, double arr[n][m])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%6.1f ", *(*(arr + i) + j));
        }
        printf("\n");
    }
    printf("\n");
}


int main(void)
{
    double source[ROWS][COLS] =
    {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 10.0},
        {11.1, 12.2, 13.3, 14.4, 15.5}
    };

    printf("source: \n");
    print2d(ROWS, COLS, ROWS, COLS, source);

    printf("source 2x3: \n");
    print2d(2, 3, ROWS, COLS, source);

    double target[ROWS][COLS];  
    cp2d(ROWS, COLS, target, source);  // copy source to target
    printf("target: \n");
    print2d(ROWS, COLS, ROWS, COLS, target);

    return 0;
}