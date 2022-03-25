#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: pointer to array
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{

	int i;
	int k = 0;

	while (k < n - 1)
	{
		i = *(a + k);
		*(a + k) = *(a + n - 1);
		*(a + n - 1) = i;
		k++;
		n--;
	}
}
