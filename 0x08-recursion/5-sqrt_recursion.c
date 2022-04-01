#include "main.h"

/**
 * sqrt_test - calculate natural square root of an integer
 * @n: integer; number to process
 * @root: integer; number to test as root
 *
 * Return: integer; value of square root or -1
 * if no natural square root
 * TheOwl
 */

int sqrt_test(int n, int root)
{
	/* base case */
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	/* recursive instructions */
	if (root * root != n)
		return (sqrt_test(n, root + 1));
}

/**
 * _sqrt_recursion - calculate natural square root of an integer
 * @n: integer; number to process
 *
 * Return: integer; value of square root or -1
 * if no natural square root
 * TheOwl
 */

int _sqrt_recursion(int n)
{
	/* exclusion */
	if (n < 1)
		return (-1);
	/* root extraction */
	else if (n == 1)
		return (1);

	if (n >= 100000000)
		return (sqrt_test(n, 10000));
	else if (n >= 1000000)
		return (sqrt_test(n, 1000));
	else if (n >= 10000)
		return (sqrt_test(n, 100));
	else if (n >= 100)
		return (sqrt_test(n, 10));
	else
		return (sqrt_test(n, 2));
}
