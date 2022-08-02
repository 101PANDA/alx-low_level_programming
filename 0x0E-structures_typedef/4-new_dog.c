#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: d (pointer to new dog) or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
	return (d);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string to be checked
 * Return: int (success)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strdup - return pointer to newly allocated space in memory
 * @str: pointer to the string
 * Return: pointer to allocated space in mem or null if str is equal to null
 */
char *_strdup(char *str)
{
	int strcount, i;
	char *str2;

	if (str == NULL)
		return (NULL);
	strcount = _strlen(str);
	strcount++;

	str2 = malloc(sizeof(char) * strcount);
	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < strcount; i++)
		str2[i] = str[i];
	return (str2);
}
