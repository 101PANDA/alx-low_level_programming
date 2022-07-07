#include "main.h"
/**
 * print_times_table - entry point
 * @n: times tableto be printed
 * Return: void (success)
 */
void print_times_table(int n)
{
	int x, y, z;

	if (!(n > 15) || (n < 0))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + z);
				}
				else if (z < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (z / 10));
					_putchar('0' + (z % 10));
				}
				else
				{
					_putchar(' ');
					_putchar('0' + (z / 100));
					_putchar('0' + ((z / 10) % 10));
					_putchar('0' + (z % 10));
				}
				if (!(y == n))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
