/* heightTrans.c
transfrom height in centimeters to feets and inches
*/
#include <stdio.h>
#define CM_PER_INCH 2.54
#define INCH_PER_FT 12

int main(void)
{
    float cm, inch;
    int ft;

    printf("Enter a height in centimeters: ");
    scanf("%f", &cm);
    while (cm > 0)
    {
        inch = cm / CM_PER_INCH;
        ft = inch / 12; 
        inch = inch - ft * 12;

        printf("%.1f cm = %d feet, %.1f inches\n",
                cm, ft, inch);
        
        printf("Enter a height in centimeters: ");
        scanf("%f", &cm);
    }    
    printf("bye\n");

    return 0;
}