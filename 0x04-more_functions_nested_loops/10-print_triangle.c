#include "main.h"

/**
 * print_triangle - print triangles
 * @size: integer, size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1;
	int j = 1;
	int k = 1;
	int l = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= size)
		{
			while (j <= size)
			{
				while (k <= (size - i))
				{
					_putchar(' ');
					k = k + 1;
				}
				while (l <= i)
				{
					_putchar('#');
					l = l + 1;
				}
				_putchar('\n');
				k = 1;
				l = 1;
				j = j + 1;
			}
			i = i + 1;
			j = 1;
		}
	}
}
