#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - printsall the elements of
 * a list of list_t type objects
 * @h: pointer to a constant list_t data type;
 * list of list_ts to print
 *
 * Return: number of nodes in h
 * TheOwl
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
