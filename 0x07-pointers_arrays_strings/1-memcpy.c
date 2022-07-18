#include "main.h"
/**
 * _memcpy - copies specific bytes
 * @src: pointer to the space to be copied
 * @dest: pointer to the space to be filled with the content copied
 * @n: max space to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
