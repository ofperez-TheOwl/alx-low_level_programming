#include "main.h"

/**
 * _pow_recursion - raise an integer to an integer power
 * @x: integer; number to raise
 * @y: integer; power to raise to
 *
 * Return: integer; value of x**y or -1 if y < 0
 * TheOwl
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);/* exclusion */
	/* base case */
	else if (y == 0)
		return (1);
	/* recursive instructions */
	else
		return (x * _pow_recursion(x, y - 1));
}
