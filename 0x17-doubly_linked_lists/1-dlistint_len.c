#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - find number elements of a dlistint_t list
 * @h: pointer to dlistint_t, head of the list to print
 *
 * Return: size_t; number of nodes
 * TheOwl
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t i = 1;

	/* exclusions */
	if (h == NULL)
		return (0);
	/* traversing and counting */
	if (h->next == NULL) /* only one element */
		return (i);
	tmp = h->next;
	while (tmp != NULL) /* other elements */
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
