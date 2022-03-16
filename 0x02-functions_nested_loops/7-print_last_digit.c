#include "main.h"

/**
 * print_last_digit - print the last digit of the argument
 * @n: integer
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i = (-1) * i;
	}
	_putchar('0' + i);

	return (i);
}
