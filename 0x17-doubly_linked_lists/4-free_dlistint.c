#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees all elements of a dlistint_t list
 * @head: pointer to dlistint_t; first node of list
 *
 * Return: nothing
 * TheOwl
 */
void free_dlistint(dlistint_t *head)
{
	/* base case */
	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	/* recursive instructions */
	free_dlistint(head->next);
	free(head->next);
	if (head->prev == NULL)
	{
		free(head->prev);
		free(head);
	}
}
