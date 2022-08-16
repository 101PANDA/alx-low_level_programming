#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *new;

	tmp = NULL;
	new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = new;
	}

	*head = tmp;
	return (*head);
}
