#include <stdlib.h>
#include "lists.h"

/**
 * free_d - frees all elements of a dlistint_t list
 * @head: pointer to dlistint_t; first node of list
 *
 * Return: nothing
 * TheOwl
 */
void free_d(dlistint_t *head)
{
	/* base case */
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	/* recursive instructions */
	free_dlistint(head->next);
	free(head);
}

/**
 * free_dlistint - frees all elements of a dlistint_t list
 * @head: pointer to dlistint_t; first node of list
 *
 * Return: nothing
 * TheOwl
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head->prev == NULL && head->next == NULL)
	{
		free(head);
		return;
	}
	free_d(head);
}
