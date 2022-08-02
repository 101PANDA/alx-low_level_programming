#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees malloc allocated space for struct dog
 * @d: pointer to the allocated space
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
