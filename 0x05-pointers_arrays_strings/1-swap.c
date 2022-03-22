#include "main.h"

/**
 * swap_int - swap the values of 2 integers
 * @*a: pointer to first integer
 * @*b: pointer to second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
