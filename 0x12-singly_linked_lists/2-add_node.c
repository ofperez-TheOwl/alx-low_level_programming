#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list
 * @head: pointer to pointer to list_t; head element of list
 * @str: pointer to string; string of the new node
 *
 * Return: pointer tonew node if success; NULL if not
 * TheOwl
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL); /* exclusion for non valide input */
	while (*(str + i) != '\0')
	{
		i++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL); /* malloc failure */
	/* setting new values */
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL); /* strdup failure */
	new->len = i;
	/* setting the list */
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->next = *head;
	*head = new; /* new is now the first element of the list */

	return (new);
}
