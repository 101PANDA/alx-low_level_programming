#include "function_pointers.h"

/**
 * int_index - searches for an int in an array based on function passed as cmp
 * @array: array to search
 * @size: size of the array
 * @cmp: function used to search for the set array
 * Return: index of the wanted int
 * or -1 if no element matches or size of array is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int x, retur_value_of_cmp;

		if (size <= 0)
			return (-1);

		for (x = 0; x < size; x++)
		{
			retur_value_of_cmp = cmp(array[x]);
			if (retur_value_of_cmp != 0)
				return (x);
		}
		if (x >= size)
			return (-1);
	}
	return (-1);
}
