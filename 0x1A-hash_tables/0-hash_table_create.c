#include "hash_tables.h"

/**
 * hash_table_create - create an hash table of size size
 * @size: unsigned long int; size of the hash table
 *
 * Return: pointer to hash_table_t; pointer to new table if success
 * Null pointer if failure
 * TheOwl
 */
hash_table_t *hash_table_create(unsigned long int size)
{
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
	new_table->array = node_list;

	return (new_table);
}
