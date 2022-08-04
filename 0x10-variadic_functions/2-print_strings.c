#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print strings sepatrated by separator
 * @separator: separates the string
 * @n: nuber of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	unsigned int x;
	char *par2;

	va_start(par, n);
	for (x = 0; x < n; x++)
	{
		par2 = va_arg(par, char *);
		if (par2 == NULL)
			printf("(nil)");
		else
			printf("%s", par2);
		if (separator && x < (n - 1))
			printf("%s", separator);
	}
	va_end(par);
	printf("\n");
}
