#include "main.h"

/**
 * prime_testing - test primality
 * @n: integer; number to test
 * @div: integer; divisor
 *
 * Return:integer; 1 if number is prime or 0 if not
 * TheOwl
 */

int prime_testing(int n, int div)
{
	/* base case */
	if (div > n / 2)
		return (1);
	if (n % div == 0)
		return (0);
	/* recursive instructins */
	if (n % div != 0)
		return (prime_testing(n, div + 1));
}

/**
 * is_prime_number - check if an integer is prime or composite
 * @n: integer; number to screen
 *
 * Return: integer; 1 if prime, 0 if not
 * TheOwl
 */

int is_prime_number(int n)
{
	/* exclusion */
	if (n <= 1)
		return (0);
	/* recursion call */
	else
		return (prime_testing(n, 2));
}
