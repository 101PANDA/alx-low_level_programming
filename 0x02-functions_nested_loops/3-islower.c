#include "main.h"
/**
 * _islower - entry main
 * @c: the character to be checked
 * Return: int depending on output
 */
int _islower(int c)
{
	int x = c;

	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	return (0);
}
