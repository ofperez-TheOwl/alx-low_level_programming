#include "main.h"

/**
 * flip_bits - find number of  bits to flip to get from one num to another
 * @n: unsigned long int; first number
 * @m: unsigned long int; second number
 *
 * Return: unsigned; number of different bits
 * TheOwl
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int difference;

	/* Xor both nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		i += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (i);
}
