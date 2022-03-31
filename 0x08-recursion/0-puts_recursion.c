#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: pointer to string; string to print
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		_putchar('\n');
	/* recursive instruction */
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
