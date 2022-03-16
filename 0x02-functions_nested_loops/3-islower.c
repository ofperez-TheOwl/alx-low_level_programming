#include "main.h"

/**
 * _islower - check for lowercase character
 * Argument: integar c
 * Return: 1 if c is lowercase , 0 if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
