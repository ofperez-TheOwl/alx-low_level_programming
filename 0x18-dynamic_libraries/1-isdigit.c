#include "main.h"

/**
 * _isdigit - check if argument is a digit
 * @c: integer
 *
 * Return: 1 if c i a digit, 0 if not
 */

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
