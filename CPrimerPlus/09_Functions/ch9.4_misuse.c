/* misuse.c 
use a function incorrectly
The declaration of the function imax lack of declaring the parameters
the compiler can't find the mistake when the type of parameters are wrong
*/
#include <stdio.h>
int imax(); // old-style delcaration 
            // (without the declareation of parameters)

/* To solve
declare the function and the parameters
int imax(int, int);
int imax(int n, int m); // the parameters' name here is meaningless
                        // We can name the parameters with other names
                        // when defining the function
*/


int main(void)
{
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n",
           3, 5, imax(3.0, 5.0));
    return 0;
}

int imax(int n, int m)
{
    return (n > m) ? n : m;
}

// the incorrect result is as follow:
// The maximum of 3 and 5 is 3.
// The maximum of 3 and 5 is 73896.
