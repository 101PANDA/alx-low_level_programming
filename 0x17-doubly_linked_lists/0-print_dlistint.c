#include "lists.h"
#include <string.h>
#include <stdio.h>


/**
 * print_dlistint - print all elements on a list
 * @h: head of the list
 * Return: number of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
