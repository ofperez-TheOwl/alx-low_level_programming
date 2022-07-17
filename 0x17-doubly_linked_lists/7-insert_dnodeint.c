#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a
 * given index of a list of dlistint_t
 * @h: double pointer to dlistint_t; head of the list
 * @idx: unsigned int; index of the new node
 * @n: int; data of the new node
 *
 * Return: pointer to dlistint_t; adress of new node
 * or NULL if failure
 * TheOwl
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp = *h;
	/* exclusions */
	if (*h == NULL && idx != 0)
		return (NULL);
	/* first element insertion */
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* not first not last insertion */
	while (tmp != NULL)
	{
		if (i == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			/* assign values */
			new->n = n;
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	if (idx == i + 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
