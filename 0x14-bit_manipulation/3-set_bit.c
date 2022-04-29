#include "main.h"

/**
 * set_bit - sets the value of a chosen bit to 1
 * @n: pointer to unsigned long int; number to process
 * @index: unsigned int; index of the bit to set
 *
 * Return: int; 1 if success, or -1 if not
 * TheOwl
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int j = 1;

	/* exclusion for invalid input */
	i = 8 * sizeof(unsigned long int);
	if (index > i)
		return (-1);
	j = j << index; /* bit at index position is set to 1 */
	*n = (*n | j);

	return (1);
}
