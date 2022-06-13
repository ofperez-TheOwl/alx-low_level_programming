#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: integer
 *
 * Return: 1 if c is uppercase and 0 if not
 */

int _isupper(int c)
{
	int i;

	if (c > 64 && c < 91)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	return (i);
}
