#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * print sum of multiples of 3 or 5 lower than 1024
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int sum = 0;

	for (i = 0; i < 1024; i = i + 1)
	{
		j = i % 3;
		k = i % 5;
		if (j == 0 || k == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);

	return (0);
}
