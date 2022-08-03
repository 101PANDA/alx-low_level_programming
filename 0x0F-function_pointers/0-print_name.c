#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - passes name into function pointer
 * @name: name to be passed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
