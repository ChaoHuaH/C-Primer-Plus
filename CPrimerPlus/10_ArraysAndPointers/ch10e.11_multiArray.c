/* multiArray.c
multiple a number to the elements of an array
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5

void multiArray(int multi, int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            arr[i][j] *= multi;
    }
}

void printArray(int r, int c, int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            printf("%4d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main(void)
{
    int (*arr)[COLS] = (int [ROWS][COLS])
    {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    printf("original: \n");
    printArray(ROWS, COLS, arr);

    multiArray(2, ROWS, COLS, arr);
    printf("*2: \n");
    printArray(ROWS, COLS, arr);

    multiArray(3, ROWS, COLS, arr);
    printf("*2*3: \n");
    printArray(ROWS, COLS, arr);

    return 0;
}