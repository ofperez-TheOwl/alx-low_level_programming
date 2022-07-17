#include "lists.h"
#include <stdlib.h>

/**
 * free_no_loop - frees a list of int
 * @head: pointer to listint_t; list of int to frees
 * @count: size_t; number of nodes
 *
 * Return: size_t; number of free'd nodes
 * TheOwl
 */
size_t free_no_loop(listint_t *head, size_t count)
{
	/*base case : only one element */
	if (head->next == NULL)
	{
		free(head->next);
		free(head);
		return (count + 1);
	}
	/* recursive instructions */
	count = free_no_loop(head->next, count + 1);
	free(head);
	return (count);
}

/**
 * free_if_loop - frees a list of int
 * @head: pointer to listint_t; list of int to frees
 * @count: size_t; counter
 * @ref: size_t; number of node before loop
 *
 * Return: nothing
 * TheOwl
 */
void free_if_loop(listint_t *head, size_t count, size_t ref)
{
	/*base case : only one element */
	if (count == ref - 1)
	{
		free(head->next);
		free(head);
		return;
	}
	/* recursive instructions */
	free_if_loop(head->next, count + 1, ref);
	free(head);
}

/**
 * free_listint_safe - frees a list of listint_t even if there is a loop
 * @head: listint_t pointer to pointer; list to free
 *
 * Return: size_t; size of list / number of nodes in list
 * Theowl
 */
size_t free_listint_safe(listint_t **head)
{
	loop_r result = {NULL, 0};

	if (*head == NULL)
		return (0);

	result = loop_finder(*head);
	if (result.node)
		free_if_loop(*head, 0, result.len);
	else
		result.len = free_no_loop(*head, 0);

	*head = NULL;

	return (result.len);
}
