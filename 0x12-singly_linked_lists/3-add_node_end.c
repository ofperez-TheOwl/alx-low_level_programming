#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list
 * @head: pointer to pointer to list_t; head element of list
 * @str: pointer to string; string of the new node
 *
 * Return: pointer to new node if success; NULL if not
 * TheOwl
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (str == NULL)
		return (NULL); /* exclusion for non valide input */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL); /* malloc failure */
	/* set new values */
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL); /* strdup failure */
	new->len = i;
	new->next = NULL;
	/* find last element */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	/* setting the list */
	temp->next = new;

	return (new);
}
