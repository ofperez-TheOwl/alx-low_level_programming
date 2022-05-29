#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list of listint_t
 * @head: pointer to listint_t; list of int to frees
 *
 * Return: nothing
 * TheOwl
 */
void free_listint(listint_t *head)
{
	/*base case : only one element */
	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head->next == NULL)
	{
		free(head->next);
		free(head);
		return;
	}
	/* recursive instructions */
	free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - frees a list of listint_t
 * @head: double pointer to listint_t; list to free
 *
 * Return: nothing
 * TheOwl
 */
void free_listint2(listint_t **head)
{
	int i = 0;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;
	while (head[i] != NULL)
	{
		free_listint(head[i]);
		i++;
	}
	*head = NULL;
}
