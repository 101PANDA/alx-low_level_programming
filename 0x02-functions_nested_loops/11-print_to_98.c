#include "main.h"
/**
 * print_to_98 - entry point
 * @n: o
 * Return: void (success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i > 97; i++)
		{
			_putchar(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
