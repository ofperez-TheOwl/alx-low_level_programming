#include "main.h"

/**
 * _strlen_recursion - get length of strings
 * @s: pointer to string; the string to screen
 *
 * Return: integer; length of string
 */

int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);
	/* recursive instructions */
	else
	{
		int i = 1 + _strlen_recursion(s + 1);

		return (i);
	}
}
