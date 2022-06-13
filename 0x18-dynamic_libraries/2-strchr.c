#include "main.h"
#define NULL 0

/**
 * *_strchr - locate a character in a string
 * @s: pointer to string; string to screen for the character
 * @c: character; character to search in string
 *
 * Return: pointer to the first occurence of the character or
 * NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0' && *(s + i) != c)
		i++;
	if (*(s + i) == c)
		return (&s[i]);
	return (NULL);
}
