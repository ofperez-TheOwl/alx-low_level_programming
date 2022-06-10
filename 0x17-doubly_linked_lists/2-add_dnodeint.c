#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add new element at the beginning of
 * a list of dlistint_t
 * @head: double pointer to dlistint_t, points to first node
 * @n: const int; new data to add
 *
 * Return: pointer to dlistint_t; address of the new element
 * TheOwl
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* malloc and check */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* assigning values */
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
		new->next = NULL;
	else
	{
		(*head)->prev = new;
		new->next = *head;
	}
	*head = new;
	return (new);
}
