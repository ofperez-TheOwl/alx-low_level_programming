#include <stdio.h>

/**
 * main - entry point
 * print first 50 fibonacci number starting from 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	int k;
	long int l;

	printf("%li, %li, ", i, j);
	for (k = 3; k <= 50; k = k + 1)
	{
		l = i + j;
		printf("%li", l);
		if (k != 50)
		{
			putchar(',');
			putchar(' ');
		}
		i = j;
		j = l;
	}
	putchar('\n');

	return (0);
}
