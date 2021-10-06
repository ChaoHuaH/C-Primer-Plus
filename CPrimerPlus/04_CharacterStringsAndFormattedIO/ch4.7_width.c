/* width.c
field width
*/
#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*1234567890*\n");
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);   // save at least 2 length
    printf("*%10d*\n", PAGES);  // save at least 10 length
    printf("*%-10d*\n", PAGES); // align to left
    printf("\n");
    
    printf("add \'+\': ");
    printf("if positive then add \'+\', negative add \'-\' \n");
    printf("===============\n");
    printf("*%+5d*\n", PAGES);
    printf("*%+5d*\n", -PAGES);
    printf("\n");

    printf("add \' \': ");
    printf("if positive then add \' \', negative add \'-\' \n");
    printf("===============\n");
    printf("*% d*\n", PAGES);
    printf("*% d*\n", -PAGES);
    printf("\n");

    printf("add \'#\': \n");
    printf("===============\n");
    printf("%o\n", PAGES);
    printf("%#o\n", PAGES);
    printf("%#x\n", PAGES);
    printf("%#X\n", PAGES);
    printf("%#f\n", 12.0);
    printf("\n");

    printf("add \'0\': \n");
    printf("===============\n");
    printf("%05d\n", PAGES);
    printf("%07.2f\n", 12.1);
    printf("%7.2f\n", 12.1);
    printf("\n");



    return 0;
}