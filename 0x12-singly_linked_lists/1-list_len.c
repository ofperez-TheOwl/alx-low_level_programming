#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - find number of element in a linked list
 * @h: pointer to a constant list_t type; linked list to process
 *
 * Return: number of elements in h
 * TheOwl
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
