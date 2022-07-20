#include "main.h"
/**
 * is_prime_number - main function
 * @n: parameter/argument
 * Return: 0 or 1 to indicate prime numbers or not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - checks for prime number
 * @n: parameter
 * @x: number the arg should be divisible by
 * Return: 0 or 1 to indicate prime numbers or not
 */
int _prime(int n, int x)
{
	if (x == n)
		return (1);
	if ((n % x) == 0)
		return (0);
	return (_prime(n, x + 1));
}
