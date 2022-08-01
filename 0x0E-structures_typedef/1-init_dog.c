#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to the struct
 * @name: ptr to name of dog
 * @age: ptr to age of dog
 * @owner: ptr to owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
