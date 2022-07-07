#include "main.h"
/**
 * _isupper - entry point that Writes a function that checks for
 * uppercase character
 * @c: character to be cheacked
 * Return: 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
