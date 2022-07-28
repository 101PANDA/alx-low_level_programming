#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check if malloc ran
 * @b: input
 * Return: pointer to memory allocated by malloc
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
