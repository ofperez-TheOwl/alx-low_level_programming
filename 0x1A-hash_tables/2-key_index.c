#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: const unsigned char; key to evaluate
 * @size: unsigned long int; size of the table
 *
 * Return: unsigned long int; index of the key
 * TheOwl
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	if (size == 0)
		return (0);
	
	i = hash_djb2(key);
	return (i % size);
}
