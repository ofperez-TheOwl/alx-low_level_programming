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
 * *_strdup - returns a pointer to a newly allocated
 * space in memory with a copy of a specific string
 * @str: pointer to string; string of characters to copy
 *
 * Return: pointer to new string if success or NULL if str = NULL
 * or failure of malloc
 * TheOwl
 */

char *_strdup(char *str)
{
	if (*str == '\0')
		return (NULL);
	else
	{
		char *newstr = malloc(_strlen(str) * sizeof(char) + 1);
		int i;

		if (newstr == NULL)
			return (NULL);
		for (i = 0; i <= _strlen(str); i++)
		{
			newstr[i] = str[i];
		}
		return (newstr);
	}
}
