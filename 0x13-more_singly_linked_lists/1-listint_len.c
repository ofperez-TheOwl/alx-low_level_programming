#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - finds the number of elements in a list of listint_t
 * @: pointer to constant listint_t; list of listint_t object
 *
 * Return: size_t; number of elements
 * TheOwl
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
