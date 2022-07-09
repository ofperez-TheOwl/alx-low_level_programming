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

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	*head = (*head)->next;
	head = &(*head);
	return (i);
}
