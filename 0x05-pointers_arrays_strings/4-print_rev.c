#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int fwd, bwd = 0;

	for (fwd = 0; s[fwd] != '\0'; fwd++)
		;
	fwd--;
	for (; bwd <= fwd; fwd--)
		_putchar(s[fwd]);
	_putchar('\n');
}
