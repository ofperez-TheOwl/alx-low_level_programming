#include <stdlib.h>
#include "lists.h"

/**
 * last_dnode - find last element of a list of dlistint_t
 * @h: pointer to dlistint_t; any node of list
 *
 * Return: pointer to dlistint; last node
 * TheOwl
 */
dlistint_t *last_dnode(dlistint_t *h)
{
	while (h->next != NULL)
		h = h->next;
	return (h);
}

/**
 * add_dnodeint_end - add a new node at the end of a
 * list of dlistint_t
 * @head: double pointer to dlistint_t; head of the list
 * @n: constant int; data of the new node
 *
 * Return: pointer to dlistint_t; points the new node
 * TheOwl
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	/* malloc and check */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* assigning values */
	new->n = n;
	new->next = NULL;
	/* setting position in list */
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = last_dnode(*head);
		new->prev = last;
		last->next = new;
	}
	return (new);
}
