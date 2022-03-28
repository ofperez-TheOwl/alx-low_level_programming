#include <stdio.h>

/**
 * print_diagsums - print sums of the two diagonals of a square matrix of integers
 * @a: pointer to 2D array of integers; matrix of integers
 * @size: innteger; size of the square matrix
 *
 * Return: Nothing
 */

void print_diagsums(int *a; int size)
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
		diag1 = diag1 + a[j][j];
		j++;
	}
	while (i > 0)
	{
		diag2 = diag2 + a [k][i - 1];
		i--;
		k++;
	}
	printf("%d, %d", diag1, diag2);
}
