#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates array of integers
 * @min: integer; minimum integer
 * @max:integer;  maximum integer
 *
 * Return: pointer to array if success or NULL if not
 * TheOwl
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	while (min <= max)
	{
		*(array + i) = min;
		min++;
		i++;
	}
	return (array);
}
