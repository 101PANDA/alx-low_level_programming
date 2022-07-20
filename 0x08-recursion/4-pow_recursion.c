#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: the number to be multiplied
 * @y: the power it is being raised by
 * Return: -1 if y is lower than 0 and value if y is none negative intiger
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
