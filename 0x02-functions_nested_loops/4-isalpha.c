#include "main.h"
/**
 * _isalpha - entry main
 * @c: the character to be checked
 * Return: int depending on output
 */
int _isalpha(int c)
{
	int x = c;

	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);
	}
	return (0);
}
