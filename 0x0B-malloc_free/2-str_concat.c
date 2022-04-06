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
	if (*s1 == '\0')
	{
		char *conc = malloc(sizeof(char) * (_strlen(s2) + 1));
		int i;

		if  (conc == NULL)
			return (NULL);
		for (i = 0; i <= _strlen(s2); i++)
			conc[i] = s2[i];
		free (conc);
		return (conc);
	}
	else if (*s2 == '\0')
	{
		char *conc = malloc(sizeof(char) * (_strlen(s1) + 1));
		int i;

		if  (conc == NULL)
			return (NULL);
		for (i = 0; i <= _strlen(s1); i++)
			conc[i] = s1[i];
		free (conc);
		return (conc);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		char *conc = malloc(sizeof(char));

		if  (conc == NULL)
			return (NULL);
		conc[0] = '\0';
		free (conc);
		return (conc);
	}
	else
	{
		char *conc = malloc(sizeof(char) * ((_strlen(s1) + _strlen(s2)) + 1));
		int i, j;

		if (conc == NULL)
			return (NULL);
		for (i = 0; *s1 != '\0'; i++)
		{
			conc[i] = *s1;
			s1++;
		}
		for (j = 1; j <= _strlen(s2) + 1; j++)
		{
			conc[i + j] = *s2;
			s2++;
		}
		free (conc);
		return (conc);
	}
	return;
}
