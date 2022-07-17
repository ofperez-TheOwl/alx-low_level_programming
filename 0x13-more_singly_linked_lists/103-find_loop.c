#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop inside a list of listint_t
 * @head: listint_t pointer; list
 *
 * Return: listint_t; start of the loop or NULL if no loop
 * TheOwl
 */
listint_t *find_listint_loop(listint_t *head);
{
	size_t i = 0;
	loop_r result = {NULL, 0}

	result = loop_finder(head);
	if (!result.node)
		return (NULL);
	while (i < result.len)
	{
		head = head->next;
		i++;
	}
	return (head);
}
