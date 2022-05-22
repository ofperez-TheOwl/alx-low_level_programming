#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: void pointer; pointer to allocated memory area
 * @old_size: unsigned integer; size of ptr
 * @new_size: unsigned integer; siez of new memory area
 *
 * Return: pointer to newly allocated memory area if success
 * and NULL if failure
 * TheOwl
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);

		else
			return (new);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(new_size);
	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*((char *)new + i) = *((char *)ptr + i);
		}
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			*((char *)new + i) = *((char *)ptr + i);
		}
	}
	free(ptr);

	return (new);
}
