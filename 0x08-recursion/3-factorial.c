#include "main.h"

/** factorial - calculate factorial of an integer
 * @n: integer; number to process
 *
 * Return: integer; value of factorial or -1 if if n is lower than 0
 * TheOwl
 */

int factorial(int n)
{
	if (n < 0)/* exclusion */
		return (1);
	/* base case */
	else if (n == 0)
		return (1);
	/* recursive instructions */
	else if
		return (n * factorial(n - 1));
}
