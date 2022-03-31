#include "main.h"

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
	/* base case */
	int i = 1 + is_prime_number(int n);

	if (i == n / 2 && n % i != 0);
		return (0);


