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
	char ss[] = s;
	/*length of string*/
	while (*ss != '\0')
	{
		i++;
		ss++;
	}
	/*reversing*/
	i--;
	while (k < i)
	{
		str = s[k];
		s[k] = s[i];
		s[i] = str;
		i--;
		k++;
	}
}
