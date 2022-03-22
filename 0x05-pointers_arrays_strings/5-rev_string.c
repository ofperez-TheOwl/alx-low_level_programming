#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: pointer to string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 * rev_string - reverse a string of characters
 * @s: pointer to a string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = _strlen(s) - 1;
	int k = 0;
	char str;

	/*reversing*/
	while (k < i)
	{
		str = s[k];
		s[k] = s[i];
		s[i] = str;
		i--;
		k++;
	}
}
