#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - add a node to the list
 * @head: the head of the list
 * @n: value to be added to the list
 * Return: the head of the list(the address of the new element)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}
	else
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

	return (*head);
}
