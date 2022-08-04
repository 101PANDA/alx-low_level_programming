#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculate sum of int
 * @n: size of undeclared var
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list par;
		unsigned int x, sum;

		va_start(par, n);
		sum = 0;
		for (x = 0; x < n; x++)
			sum += va_arg(par, unsigned int);
		va_end(par);
		return (sum);
	}
	return (0);
}
