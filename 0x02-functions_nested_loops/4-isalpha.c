#include "main.h"

/**
 * _isalpha - check if argument is a letter lowercase of uppercase
 * @c: integer
 *
 * Return: 1 if c is a letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c < 91 && c > 64) || (c < 123 && c > 96))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
