#include "main.h"

/**
 * *_strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: integer, 0 if egality, négative if s1<s2, positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ( *s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0' && *s2 != *s1)
		{
			i = (*s1 - *s2);
			return (i);
		}
		s1++;
		s2++;
	}
	return (0);
}
