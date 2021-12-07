/* prime.c
find all primes smaller than an assigned number
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(unsigned int num);

int main(void)
{
    unsigned int num;
    printf("Enter an inteter: ");
    scanf("%u", &num);

    printf("Primes under %u:\n", num);
    for (unsigned i = 2, count = 0; i <= num; i++)
    {
        if (isPrime(i))
        {
            printf("%4u ", i);
            count++;
            if (count % 10 == 0)
                printf("\n");
        }            
    }
    printf("\n");

    return 0;
}

bool isPrime(unsigned int num)
{
    if (num <= 1)
        return false;
    
    for (unsigned int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;    
}
