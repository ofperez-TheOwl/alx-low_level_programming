#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to char; binary number given as a string of 0 and 1
 *
 * Return: the number in decimal base or 0 if b is NULL
 * TheOwl
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	/* exclusion */
	if (b == NULL)
		return (0);
	/* length of binary number */
	while (*(b + i) != '\0')
	{
		i++;
	}
	i--;
	/* conversion */
	while (*b != '\0')
	{
		if (*b == '1') /* if digit is 1 */
		{
			sum = sum + 1 * (1 << i);
			i--;
			b++;
		}
		else if (*b == '0')
		{
			i--;
			b++;
		}
		else
			return (0);
	}

	return (sum);
}
