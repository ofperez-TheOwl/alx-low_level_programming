#include "main.h"
#define NULL 0

/**
 * _strpbrk - search a string for a character from a set of character
 * @s: pointer to string; string to screen
 * @accept: pointer to string; set of character to search for
 *
 * Return: pointer to first occurence of character or NULL if none
 * TheOwl
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (&s[i]);
		}
	}
	return (NULL);
}
