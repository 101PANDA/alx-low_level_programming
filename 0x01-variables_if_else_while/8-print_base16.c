#include <stdio.h>
/**
 * main - print all numbers of 0x
 * Return: 0 (success)
 */
int main(void)
{
	int x;
	char i;
	
	for (x = 48; x < 58; x++)
		putchar(x);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
