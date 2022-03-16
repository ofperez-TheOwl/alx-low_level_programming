#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print integer from argument no 98
 * @n: integer
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		while (i >= 98)
		{
			printf("%d, ", i);
			i = i - 1;
		}
	}
	else if (n == 98)
	{
		printf("%d", i);
	}
	else if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d, ", i);
			i = i + 1
		}
	}
	putchar('\n');
}
