#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to one of the integer value to be swaped
 * @b: pointer to the second integer value to be swaped
 * Return: void (success)
 */
void swap_int(int *a, int *b)
{
	int middle_man = *a;

	*a = *b;
	*b = middle_man;
}
