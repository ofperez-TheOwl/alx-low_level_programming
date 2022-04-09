#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @s: pointer to string; sring to process
 *
 * Return: integer
 * TheOwl
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to string; first string
 * @s2: pointer to string; second string
 * @n: unsigned integer; numder of bytes of s2 to copy
 *
 * Return: pointer to string if success, NULL if not
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	if (len2 <= n)
	{
		for (j = 0; j <= len2; j++)
		{
			concat[i] = s2[j];
			i++;
		}
		return (concat);
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			concat[i] = s2[j];
			i++;
		}
		concat[i] = '\0';
		return (concat);
	}
}
