#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list of list_t
 * @head: pointer to list_t; list of list_t
 *
 * Return: void pointer
 * TheOwl
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head); /* it also frees the head->next of the previous node */
		head = head->next;
	}
}
