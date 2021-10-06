/* reverseChar.c
input a string
output the reverse one
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[256];

    printf("Enter a string: \n");
    int i = 0;
    do {
        scanf("%c", &input[i]);
        // printf("%d %c\n",i, input[i]);
    } while (input[i++] != '\n');
    input[strlen(input) - 1] = '\0';  // replace the last element '\n' with '\0'

    printf("Input : ");
    for (int i = 0; i < strlen(input); i++)
        printf("%c", input[i]);
    printf("\n");

    printf("Output: ");
    for (int i = strlen(input) - 1; i >= 0; i--)
        printf("%c", input[i]);
    printf("\n");

    return 0;
}