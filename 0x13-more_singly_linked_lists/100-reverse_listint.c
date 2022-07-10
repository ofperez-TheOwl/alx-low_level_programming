#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: listint_t pointer to pointer; list to reverse
 *
 * Return: listint_t pointer; first node of new list
 * TheOwl
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp_prev = NULL, *tmp_next = (*head)->next;

	if (head == NULL || *head == NULL)
		return (NULL);
	/* traversing and reodering */
	while (*head != NULL)
	{
		(*head)->next = tmp_prev;
		if (tmp_next == NULL)
			return (*head);
		tmp_prev = *head;
		*head = tmp_next;
		tmp_next = tmp_next->next;
	}
	return (NULL);
}
