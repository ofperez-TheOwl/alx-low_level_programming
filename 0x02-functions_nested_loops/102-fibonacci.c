#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * print first 50 fibonacci number starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int k;
	int l;

	printf("%d, %d, ", i, j);
	for (k = 3; k <= 50; k = k + 1)
	{
		l = i + j;
		printf("%d, ", l);
		i = j;
		j = l;
	}
	putchar('\n');

	return (0);
}
