#include "main.h"

/**
 * bit_finder - finds bit at a given index
 * @index: unsigned int; index at which to stop
 * @current: unsigned int; current index
 * @n: unsigned long int; currently processed number
 *
 * Return: value of bit or -1 if failure
 * TheOwl
 */
int bit_finder(unsigned int index, unsigned int current, unsigned long int n)
{
	/* base case */
	if (current == index) /* success */
		return (n - (2 * (n >> 1)));
	if (n >> 1 == 0) /* failure */
		return (-1);
	/* recursive instruction */
	return (bit_finder(index, current + 1, n >> 1));

}

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
	return (bit_finder(index, 0, n));
}
