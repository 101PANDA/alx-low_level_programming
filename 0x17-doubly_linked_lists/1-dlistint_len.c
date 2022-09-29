#include "lists.h"
#include <string.h>
#include <stdio.h>


/**
 * dlistint_len - print all elements on a list
 * @h: head of the list
 * Return: number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
