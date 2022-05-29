#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list of int
 * @head: pointer to listint_t; list of int to frees
 *
 * Return: nothing
 * TheOwl
 */
void free_listint(listint_t *head)
{
	/*base case : only one element */
	if (head == NULL || head->next == NULL)
	{
		free(head->next);
		free(head);
		return;
	}
	/* recursive instructions */
	free_listint(head->next);
	free(head);
}
