#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t pointer to pointer; list of number
 * @idx: unsigned int; index where to inserts
 * @n: int; number to insert
 *
 * Return: listint_t pointer; new node if success or NULL otherwise
 * TheOwl
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int i = 0;

	tmp = *head;
	/* malloc and initialization of new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = tmp;
	new_node->n = n;

	if (idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	/* traversing list to the point of insertion */
	while (tmp != NULL)
	{
		if (i == idx - 1)
			/* inserting */
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
