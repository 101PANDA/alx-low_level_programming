#include "main.h"
/**
 * *_memset - fills memory witha constant byte
 * @s: pointer to the space to be filled
 * @b: the content of the space
 * @n: max space to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fillup;

	for (fillup = 0; fillup < n; fillup++)
	{
		s[fillup] = b;
	}
	return (s);
}
