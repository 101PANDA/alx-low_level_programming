#include "main.h"
/**
 * _strlen_recursion - finds length of string
 * @s: string it will be checking
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - foundation for check
 * @s: string to be checked
 * Return: check
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	length--;
	return (check(s, length));
}

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @length: length of the string
 * Return: 0 or 1 to indicate palindrome or not
 */
int check(char *s, int length)
{
	if (length < 1)
		return (1);
	if (*s == *(s + length))
		return (check(s + 1, length - 2));
	return (0);
}
