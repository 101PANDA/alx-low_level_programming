#include "main.h"
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);
	_putchar('\n');
	return (0);
}
