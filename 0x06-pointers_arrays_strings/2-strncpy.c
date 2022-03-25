#include "main.h"

/**
 * *_strncpy - copies n bytes from a string into a destination string,
 * @dest: pointer to source string
 * @src: pointer to the string to copy
 * @n: integer, number of char to copy
 *
 * Return: pointer to copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
