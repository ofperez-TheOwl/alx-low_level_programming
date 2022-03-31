#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse order
 * @s: pointer to string; string to print
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return;
	/* recursive instructions */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
