/* downloadTimes.c */
#include <stdio.h>

int main(void)
{
    float speed;
    float size;

    printf("The speed of downloading in megabits per second: ");
    scanf("%f", &speed);
    printf("The size of the file in megabytes: ");
    scanf("%f", &size);

    printf("At %.2f megabits per second, a file of %.2f megabytes\n",
            speed, size);
    printf("downloads in %.2f seconds\n", size * 8.0 / speed);

    return 0;
}