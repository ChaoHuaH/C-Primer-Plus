/* input.c
when to use &
*/
#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enger you age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);  // use the & here
    scanf("%s", pet);  // no & for char array
    printf("%d $%.2f %s\n", age, assets, pet);

    printf("\n==============\n");
    printf("\'*\' limits the input length\n");
    char chars[20];
    scanf("%5s", chars); // can only input length 5 chars
    printf("%s\n", chars);

    printf("\n==============\n");
    int i, j;
    scanf("%d, %d", &i, &j); // two int input need to be separated by ',' 
                             // and no space after first nubmer
    printf("%d %d\n", i, j);

    return 0;
}