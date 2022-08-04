#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers given sequentially followed by the seperator
 * @separator: seperates the numbers beign printed
 * @n: count of int passed to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int i;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(par, unsigned int));

		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
