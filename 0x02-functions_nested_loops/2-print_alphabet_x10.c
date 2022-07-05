#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Return: void (success)
 */
void print_alphabet_x10(void)
{
	char x;
	int e;

	for (e = 0; e < 10; e++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
