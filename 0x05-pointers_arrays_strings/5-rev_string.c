#include "main.h"

/**
 * rev_string - reverse a string of characters
 * @*s: pointer to a string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = _strlen(*s) - 1;
	int k = 0;
	char str[] = *s;

	while (i >= 0)
	{
		*s[k] = str [i];
		i = i - 1;
		k = k + 1;
	}
}
