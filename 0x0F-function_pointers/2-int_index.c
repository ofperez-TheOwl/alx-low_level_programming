#include <stddef.h>

/**
 * int_index - searches for integer in array with function pointer
 * @array: pointer int; array of integers
 * @size: int; size of array
 * @cmp: pointer to function taking an int as argument and returning int;
 * function for searching/comparing that we need to execute
 *
 * Return: index of integer if success or -1 if not
 * TheOwl
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* exclusion */
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);
}
