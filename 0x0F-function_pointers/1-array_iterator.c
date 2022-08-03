#include "function_pointers.h"

/**
 * array_iterator - executes an action on each given member of an array
 * of certain size
 * @array: array passed
 * @size: size of the array passed
 * @action: fuction pointer to the function(action) to be executed
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
