#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string; string to screen
 * @accept: pointer to string; list of character to search for
 *
 * Return: number of match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;/* matches counter */

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0;*(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k++;
				break;
			}
			if (*(accept + j + 1) == '\0' && *(s + i) != *(accept + j))
				return (k);
		}
	}

	return (k);
}
