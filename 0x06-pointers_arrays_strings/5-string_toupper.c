#include "main.h"

/**
 * *string_toupper - capitalize all letters of a string
 * @s: pointer to the string
 *
 * Return: pointer to string with uppercase letters
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
