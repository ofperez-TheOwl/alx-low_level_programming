#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: integer
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 1;
	int k = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)/* number of line*/
		{
			while (k <= i)/* number of space*/
			{
				_putchar(' ');
				k = k + 1;
			}
			_putchar('\\');
			_putchar('\n');
			k = 1;
			i = i + 1;
		}
	}
}
