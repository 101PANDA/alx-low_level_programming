#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: the given number
 * REturn: value of th factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
