#include "main.h"

/**
 * print_square - print squares
 * @size: integer, size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i = 1;
	int k = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			while (k <= size)
			{
				_putchar('#');
				k = k + 1;
			}
			_putchar('\n');
			k = 1;
			i = i + 1;
		}
	}
}
