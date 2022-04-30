#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: unsigned long int; number to process
 * @index: unsigned int; index of the bit to clear
 *
 * Return: int; 1 if success -1 if not
 * TheOwl
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int j = 1;

	/* exclusion for invalid input */
	i = 8 * sizeof(unsigned long int);
	if (i < index)
		return (-1);
	/* set to 0 */
	j = ~(j << index);
	*n = (*n & j);

	return (1);
}
