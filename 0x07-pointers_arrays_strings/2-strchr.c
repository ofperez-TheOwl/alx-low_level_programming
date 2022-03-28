#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: pointer to string; string to sreen for the character
 * @c: character; character to search in string
 *
 * Return: pointer to the first occurence of the character or
 * NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	char *st;

	while (*s != '\0')
	{
		if (*s == c)
		{
			st = &(*s);
			return (st);
		}
		s++;
	}

	return ('\0');
}
