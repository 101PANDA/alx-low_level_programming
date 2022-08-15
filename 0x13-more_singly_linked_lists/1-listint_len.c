#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nelem = 0;

	while (h != NULL)
	{
		nelem++;
		h = h->next;
	}
	return (nelem);
}
