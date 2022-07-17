#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete an element of a list of dlistint_t
 * @head: dlistint_t pointer to pointer; list
 * @index: int; index of node
 *
 * Return:int; 1 if success -1 if not
 * TheOwl
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head, *del;

	if (tmp == NULL)
		return (-1);
	if (index == 0 && tmp->next == NULL)
	{
		free(tmp);
		*head = NULL;
		return (1);
	}

	if (index == 0 && tmp->next != NULL)
	{
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next != NULL)
	{
		if (i == index - 1)
		{
			del = tmp->next;
			tmp->next = tmp->next->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp;
			free(del);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
