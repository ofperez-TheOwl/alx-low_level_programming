#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete an element of a list of dlistint_t
 * @head: double
 * @index: int
 *
 * Return:int;
 * TheOwl
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t tmp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = head->next;
		free(((*head)->prev)->next);
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	while (tmp->next != NULL)
	{
		if (i == index)
		{
			(tmp->prev)->next = tmp->next;
			(tmp->next)->prev = tmp->prev;
			free(tmp->next);
			free(tmp->prev);
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
