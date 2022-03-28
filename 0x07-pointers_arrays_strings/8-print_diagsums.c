#include <stdio.h>

/**
 * print_diagsums - print sums of the two diagonals of a square matrix of integers
 * @a: pointer to 2D array of integers; matrix of integers
 * @size: innteger; size of the square matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
       	int i = size;
	int j = 0;
	int k = 0;
	int diag1 = 0;
	int diag2 = 0;

	if (size < 0)
		i = -1 * size;
        while (j < i)
	{
		k = (j * i) + j;
		diag1 = diag1 + a[k];
		j++;
	}
	j = 1;
	while (j <= i)
	{
		k = (j * i) - j;
		diag2 = diag2 + a[k];
		j++;
	}
	printf("%d, %d\n", diag1, diag2);
}
