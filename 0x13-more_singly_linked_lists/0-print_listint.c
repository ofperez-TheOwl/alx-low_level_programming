#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the list of ints stored inside listint
 * @h: pointer to a constant listin_t; list of listint_t data
 *
 * Return:size_t; the number of nodes
 * TheOwl
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
