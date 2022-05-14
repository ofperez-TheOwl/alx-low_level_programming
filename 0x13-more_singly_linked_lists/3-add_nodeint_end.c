#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - add new node at the end of list of listint_t
 * @head: double pointer to listint_t; list of listint_t
 * @n: constant int; int data of the new node
 *
 * Return: pointer to listint_t if success, NULL if not
 * TheOwl
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new;

	/* set value of new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	_putchar('1');
	new->n = n;
	new->next = NULL;
	if (*head == NULL) /* first element of list */
		return (new);
	_putchar('2');
	/* traversing list to find last element */
	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
	}
	_putchar('3');
	/* set new node as last element */
	tmp->next = new;
	}
	return (*head);
}
