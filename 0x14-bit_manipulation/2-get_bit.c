#include "main.h"

/**
 * get_bit - calculate the value of the bit at a given index
 * @n: unsigned long int; integer number to process
 * @index: unsigned int; index of the bit to find
 *
 * Return: value of bit or -1 if failure
 * TheOwl
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* shift number index places right to find bit */
	bit = ((n >> index) & 1);

	return (bit);
}
