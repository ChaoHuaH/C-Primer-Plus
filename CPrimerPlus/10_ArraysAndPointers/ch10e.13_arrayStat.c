/* arrayStat.c
ask to input 3x5 double array and save as an array
calculate average of each row
calculate the total
find the maximum
print the output
*/
#include <stdio.h>
#define ROWS 3
#define COLS 5

void inputArray(int cols, double arr[cols])
{
    for (int i = 0; i < cols; i++)
    {
        while (scanf("%lf", arr + i) != 1)
        {
            scanf("%*s");
            printf("Please enter a number.\n");
        }       
    }

    printf("Input: ");
    for (int i = 0; i < cols; i++)
        printf("%.1f ", arr[i]);
    printf("\n");

}

void input2d(int rows, int cols, double arr2d[rows][cols])
{
    printf("\nYou are going to input a %dx%d array\n\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        printf("The %d array: (input %d numbers)\n", i + 1, cols);
        inputArray(cols, arr2d[i]);   
    }
}

double arrayAvg(int cols, double arr[cols])
{
    double sum = 0;
    for (int i = 0; i < cols; i++)
        sum += arr[i];

    return sum/cols;
}

double array2dTot(int rows, int cols, double arr2d[rows][cols])
{
    double total = 0;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            total += arr2d[i][j];
    
    return total;
}

double arrayMax(int rows, int cols, double arr2d[rows][cols])
{
    double max = arr2d[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            max = (max < arr2d[i][j]) ? arr2d[i][j] : max;
    
    return max;
}


int main(void)
{
    // double arr1[COLS];
    // inputArray(COLS, arr1);
    // printf("===========\n");
    // for (int i = 0; i < COLS; i++)
    //     printf("%.1f ", arr1[i]);
    // printf("\n");

    // double avg = arrayAvg(COLS, arr1);
    // printf("Average: %.1f\n", avg);


    // input a ROWSxCOLS array
    double arr2d[ROWS][COLS];
    input2d(ROWS, COLS, arr2d);
    printf("===================\n\n");
    printf("The %dx%d array: \n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
            printf("%.1f ", arr2d[i][j]);
        printf("\n");
    }
    printf("\n");

    // calculate the average of each row
    for (int i = 0; i < ROWS; i++)
    {
        printf("The average of %d row: %.1f \n",
               i + 1, 
               arrayAvg(COLS, arr2d[i]));
    }
    printf("\n");

    // calculate the total of the array
    printf("The total of all elements: %.1f \n",
            array2dTot(ROWS, COLS, arr2d));
    printf("\n");

    // find the max element of the array
    printf("The maximum of all elements: %.1f \n",
            arrayMax(ROWS, COLS, arr2d));
    printf("\n");

    return 0;
}