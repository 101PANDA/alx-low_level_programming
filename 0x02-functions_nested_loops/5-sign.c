#include "main.h"
/**
 * print_sign - entry main
 * @n: the character to be checked
 * Return: int depending on output
 */
int print_sign(int n)
{
	int x = n;

	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
