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
 * print_listint_safe - prints a list of listint_t even if there is a loop
 * @head: constant listint_t pointer; list to print
 *
 * Return: size_t; number of nodes in list
 * Theowl
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t i = 0;
	loop_r result = {NULL, 0};

	if (head == NULL)
	{
		printf("0\n");
		exit(98);
	}
	result = loop_finder(tmp);
	if (!(result.node))
	{
		while (tmp)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			i++;
			tmp = tmp->next;
		}
	}
	else
	{
		while (i < result.len)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			i++;
			tmp = tmp->next;
		}
		printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	}

	return (i);
}
