#include "hash_tables.h"

/**
 * free_hash_node - frees a list of hash_node
 * @head: pointer to hash_node_t; list of nodes to free
 *
 * Return: nothing
 * TheOwl
 */
void free_hash_node(hash_node_t *head)
{
	/*base case : only one element */
	if (head == NULL)
	{
		free(head);
		return;
	}
	if (head->next == NULL)
	{
		free(head->key);
		free(head->value);
		free(head->next);
		free(head);
		return;
	}
	/* recursive instructions */
	free_hash_node(head->next);
	free(head->key);
	free(head->value);
	free(head);
}

/**
 * int_to_str - convert a long int to string
 * @n: unsigned long int; number to convert
 *
 * Return: pointer to char; number in string form
 * TheOwl
 */
char *int_to_str(unsigned long int n)
{
	int i = 1, j = 10, k = 0;
	char *c;

	while (n / j == 0)
	{
		i++;
		j = j * 10;
	}
	c = malloc((i + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	c[i] = '\0';
	i = 0;
	while (c[i] != '\0')
	{
		j = j / 10;
		c[i] = '0' + (n - k) / j;
		k = k + ((n - k) /j) * j;
		i++;
	}
	return (c);
}

/**
 * hash_taable_create - create an hash table of size size
 * @size: unsigned long int; size of the hash table
 *
 * Return: pointer to hash_table_t; pointer to new table if success
 * Null pointer if failure
 * TheOwl
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*unsigned long int i = 0;
	hash_node_t *tmp;*/
	hash_table_t *new_table;
	hash_node_t **node_list;

	/* memory allocation and initialization of new table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	node_list = malloc(sizeof(hash_node_t *) * size);
	if (node_list == NULL)
	{
		free(new_table);
		return (NULL);
	}
	/* allocate memory and initialize each node of the table
	while (i < size)
	{
		tmp = malloc(sizeof(hash_node_t));
		if (tmp == NULL)
			return (NULL);
		initialization
		tmp->key = int_to_str(i);
		if (tmp->key == NULL)
		{
			free(*node_list);
			return (NULL);
		}
		tmp->value = NULL;
		tmp->next = NULL;
		node_list[i] = tmp;
		i++;
	}
	*/
	new_table->array = node_list;

	return (new_table);
}
