#include "main.h"

/**
 * rev_string - reverse a string of characters
 * @s: pointer to a string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char str;
	/*length of string*/
	while (*s != '\0')
	{
		i++;
		s++;
	}
	/*reversing*/
	i--;
	if (i > 0)
	{
		while (k < i)
		{
			str = s[k];
			s[k] = s[i];
			s[i] = str;
			i--;
			k++;
		}
	}
}
