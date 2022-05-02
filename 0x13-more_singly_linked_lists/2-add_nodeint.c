#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint - add a new node at the begining of the list of listint_t
 * @head: double pointer to listint_t; head of the list of listint_t
 * @n: const int; int data of the new node
 *
 * Return: pointer to listint_t if success or NULL if not
 * TheOwl
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	/* set values of new node */
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	
	return (new);
}
