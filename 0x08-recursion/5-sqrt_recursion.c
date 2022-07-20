#include "main.h"

int _sqr(int n, int root);

/**
 * _sqrt_recursion - main function
 * @n: the number
 * Return: the next function if n less than or equal to 0, returns -1 or 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqr(n, 1));
}

/**
 * _sqr - checks foor the root of the number
 * @root: the root of the number
 * @n: the number
 * Return: root
 */
int _sqr(int n, int root)
{
	if ((root * root) > n)
		return (-1);
	if ((root * root) == n)
		return (root);
	return (_sqr(n, root + 1));
}
