#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in the list
 * @head: pointer to listint_t; head of the list
 *
 * Return: int; sum of all the data in the given list
 * Te-heOwl
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
