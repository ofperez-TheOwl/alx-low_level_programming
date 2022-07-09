#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at n'th position in a list
 * @head: pointer to listint_t; head of the list
 * @index: unsigned int; position of the node, start at 0
 *
 * Return: pointer to listint_t; node at index index.
 * TheOwl
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
