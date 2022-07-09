#include <stdlib.h>
#include  "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: listint_t pointer to pointer; list
 * @index: unsigned int; index of node to delete
 *
 * Return: int; 1 if success -1 if not
 * TheOwl
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head, *del;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	while (tmp->next != NULL)
	{
		if (i == index - 1)
		{
			del = tmp->next;
			tmp->next = del->next;
			free(del);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}

	return (-1);
}
