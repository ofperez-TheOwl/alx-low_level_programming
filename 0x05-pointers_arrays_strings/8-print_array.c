#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integer
 * @*a: pointer to array
 * @n: integer
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;
	int str[] = *a;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", str[i]);
		}
		else
		{
			printf("%d, ", str[i]);
		}
	}
}
