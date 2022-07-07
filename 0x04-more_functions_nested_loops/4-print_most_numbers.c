#include "main.h"
/**
 * print_most_numbers - print all single numbers exept 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	if (x != 4 && x != 2)
		for (x = 48; x < 58; x++)
			_putchar(x);
	_putchar('\n');
}
