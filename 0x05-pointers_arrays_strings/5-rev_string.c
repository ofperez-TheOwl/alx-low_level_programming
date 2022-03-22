#include "main.h"

/**
 * rev_string - reverse a string of characters
 * @*s: pointer to a string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char str[] = s;
	/*length of string*/
	while (*s != '\0')
	{
		i++;
		*s = *s + 1;
	}
	/*reversing*/
	while (i >= 0)
	{
		s[k] = str [i];
		i = i - 1;
		k = k + 1;
	}
}
