#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of string
 * @s: pointer to string; string to process
 *
 * Return: integer; length of string
 * TheOwl
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *str_concat - concatenates two strings
 * @s1: pointer to string; first string
 * @s2: pointer to string; second string
 *
 * Return: pointer to new string or NULL if failure
 * TheOwl
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1), len2 = _strlen(s2), i, j;
	char *conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
		return (NULL)
	if (len1 == 0)
		*s1 = "";
	if (len2 == 0)
		*s2 = "";
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < len2 + 1; j++)
	{
		conc[i] = s2[j];
		i++;
	}
}
