#include "main.h"
#include <stdio.h>
/**
 * print_array - print values in an array
 * @a: pointer to the array
 * @n: last value in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		printf("%d", a[i]);
		if (i != (n-1))
			printf(", ");
	}
	printf("\n");
}
