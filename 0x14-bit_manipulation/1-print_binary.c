#include "main.h"

/**
 * print_binary - prints binary representation of given number
 * @n: unsigned long int; integral number to print
 *
 * Return: nothing but a void
 * TheOwl
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	/* base case */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1 == 0)
		_putchar('1');
	/* recursive instructions */
	if (n >> 1 != 0)
	{
		i = n - (2 * (n >> 1));
		n = n >> 1;
		print_binary(n);
		if (i == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
