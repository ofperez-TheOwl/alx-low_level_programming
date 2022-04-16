#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - executes function on an array via a function ptr
 * @array: pointer to array of integers
 * @size: size_t; size of array
 * @action: pointer to function taking int as argument;
 * function that we need to execute
 *
 * Return: nothing
 * TheOwl
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
