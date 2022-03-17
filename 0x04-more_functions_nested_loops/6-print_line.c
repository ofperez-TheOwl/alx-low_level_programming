#include "main.h"

/**
 * print_line - print a line
 * @n: integer
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
}
