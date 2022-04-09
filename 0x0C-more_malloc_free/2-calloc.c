#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: unsigned int; number of element of array
 * @size: unsigned int; number of bytes of each element
 *
 * Return: pointer to array if success, NULL if not
 * TheOwl
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (cal == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		((char *)cal)[i] = 0;
	return (cal);
}
