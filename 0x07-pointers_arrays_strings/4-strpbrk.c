#include "main.h"

/**
 * _strpbrk - search a tring for a character from a set of character
 * @s: pointer to string; string to sreen
 * @accept: pointer to string; set of character to search for
 *
 * Return: pointer to first occurence of character or NULL if none
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			if (*(s + i + 1) == '\0' && *(accept + j + 1) == '\0' &&
					*(s + i) != *(accept + j))
				return (s + i + 1);
		}
	}
	return ('\0');
}
