#include "main.h"

/**
 * factorial(int n) - a function that returns the factorial of a given number
 * @n : input value
 * return : factorial of number. If `n` is less than 0, returns -1.
 */
int factorial(int n)
{
if (n == 0 || n == 1)
return (1);
if (n > 1)
return (n * factorial(n - 1));
else
return (-1);
}
