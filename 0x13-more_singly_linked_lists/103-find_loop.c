#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * loop_finder - finds a loop in a list of listint_t
 * @head: constant listint_t pointer; list
 *
 * Return: loop_r pointer; number of element before loop and junction node
 *
 * Desscription: use Floyd Circle finding algorithm
 * TheOwl
 */
loop_r loop_finder(const listint_t *head)
{
	loop_r result = {NULL, 0};
	const listint_t *tmp_slow = head, *tmp_fast = head;

	if (head == NULL)
		exit(98);
	if (head->next == NULL)
		return (result);
	while (tmp_slow && tmp_fast && tmp_fast->next)
	{
		tmp_slow = tmp_slow->next;
		tmp_fast = (tmp_fast->next)->next;
		result.len++;
		if (tmp_slow == tmp_fast)
		{
			result.node = tmp_slow;
			tmp_slow = head;
			while (tmp_slow != tmp_fast)
			{
				tmp_slow = tmp_slow->next;
				tmp_fast = tmp_fast->next;
				result.len++;
			}
			return (result);
		}
	}
	return (result);
}

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
