/* fibonacci.c
use fibonacci sequence to show a drawback of recursion
*/

unsigned long Fibonacci(unsigned n)
{
    if (n > 2)
        return Fibonacci(n-1) + Fibonacci(n-2);
    else 
        return 1;
}

// the function use double recursion
// that means the function call itself twice through 1 recursion
// when calling the first level recursion, it would call another two recursions
// and calling the second level recursion, each recursion would call another two (total 4)
// and so on
// the number of calling the function at each level would increase exponentially
// it would use a lot of memory