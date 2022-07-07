#include "main.h"
/**
 * print_most_numbers - print all single numbers exept 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x = 0;

	for (x = 48; x < 58; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
