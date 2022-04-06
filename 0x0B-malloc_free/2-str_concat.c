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
	/* exlusion */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int i;
	int j;
	char *conc = malloc(sizeof(char) * (len1 + len2 + 1));

	/*validation */
	if (conc == NULL)
		return (NULL);
	/* concatenation */
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < len2 + 1; j++)
	{
		conc[i] = s2[j];
		i++;
	}
	return (conc);
}
