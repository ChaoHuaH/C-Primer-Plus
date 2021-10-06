/* calculateChar.c
calculate the number of characters inputted
*/
#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;

    printf("Enter some text:\n");
    while ((ch = getchar()) != EOF)
        cnt++;
    printf("There %d chars is the text\n", cnt);
    
    return 0;
}