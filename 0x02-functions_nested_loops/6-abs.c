#include "main.h"

/**
 * _abs - compute the absolute value of argument
 * @n: integer
 * Return: absolute value of n
 */

int _abs(int n)
{
	int abs_n;

	if (n > 0)
	{
		abs_n = n;
		return (abs_n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		abs_n = n * (-1);
		return (abs_n);
	}
}
