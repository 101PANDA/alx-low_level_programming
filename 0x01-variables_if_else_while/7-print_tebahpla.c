#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char x = 'z';

	while (x != '{')
	{
		putchar(x);
		x--;
	}
	putchar("\n");
	return (0);
}
