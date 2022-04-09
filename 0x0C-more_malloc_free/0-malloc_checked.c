#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned integer; number of bytes to allocate
 *
 * Return: pointer to allocated memory if success, 98 if not
 * TheOwl
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	else
		return (ptr);
}
