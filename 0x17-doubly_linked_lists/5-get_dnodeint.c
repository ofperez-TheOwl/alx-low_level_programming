#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - find the n'th node of a list of dlistint_t
 * @head: pointer to dlistint_t; head of the list
 * @index: unsigned int; index of the wanted node
 *
 * Return: pointer to dlistint_t; wanted node
 * TheOwl
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	/* exlusions */
	if (head == NULL)
		return (NULL);
	/* traversing and checking */
	while (head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
