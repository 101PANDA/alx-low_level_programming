#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the reallocated block of memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: ptr, NULL if new_size is equal to 0 and ptr not equal to null
 * and NULL if malloc fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);
	free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}
