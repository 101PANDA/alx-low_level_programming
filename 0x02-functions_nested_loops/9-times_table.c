#include "main.h"
/**
 * times_table - prints out a multiplication table.
 *
 * Return: Void.
 */

void times_table(void)
{
	int i, x, m;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			m = i * x;
			if (m < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + m  / 10);
				_putchar('0' + m  % 10);
			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
