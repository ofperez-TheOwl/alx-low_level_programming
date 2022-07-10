#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns its data
 * @head: double pointer to listint_t; list of listint_t
 *
 * Return: int; data of first node of head
 * TheOwl
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	i = tmp->n;
	*head = tmp->next;
	head = &(*head);
	free(tmp)
	return (i);
}
