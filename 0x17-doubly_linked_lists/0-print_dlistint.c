#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: pointer to dlistint_t, head of the list to print
 *
 * Return: size_t; number of nodes
 * TheOwl
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp;
	size_t i = 1;

	/* exclusions */
	if (h == NULL)
		return (0);
	/* traversing and printing */
	printf("%d\n", h->n);
	if (h->next == NULL) /* only one element */
		return (i);
	tmp = h->next;
	while (tmp != NULL) /* other elements */
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
