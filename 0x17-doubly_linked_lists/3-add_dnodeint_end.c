#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a node to the end of a list
 * @head: head of the list
 * @n: value in the list
 * Return: address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (head == NULL)
			return (NULL);

		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
	}

	else
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));
		dlistint_t *temp;

		if (new == NULL)
			return (NULL);


		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
			return (NULL);

		temp = *head;
		new->n = n;
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}

	return (*head);
}
