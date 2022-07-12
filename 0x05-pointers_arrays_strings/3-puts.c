#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to the string
 * Return: void
 */
void _puts(char *str)
{
	int valueofstring;

	for (valueofstring = 0; str[valueofstring] != '\0'; valueofstring++)
	{
		_putchar(str[valueofstring]);
	}
	_putchar('\n');
}
