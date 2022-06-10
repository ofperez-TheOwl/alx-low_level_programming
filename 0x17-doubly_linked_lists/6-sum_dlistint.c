#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - adds all the data of a list of dlistint_t
 * @head: pointer to dlistint_t; first node of list
 *
 * Return: int; sums of head->n
 * TheOwl
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	/* exclusions */
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
