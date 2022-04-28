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
	list_t *temp;

	while (head->next != NULL)
	{
		free(head->str);
		printf("segment first");
		temp = head->next;
		printf("segment after temp = head->next");
		free(head);
		printf("segment aftere free head");
		head = temp;
		printf("segment after head = temp");
	}
	free(head->str);
		printf("segment before last");
	free(head);
	printf("segment last");
}
