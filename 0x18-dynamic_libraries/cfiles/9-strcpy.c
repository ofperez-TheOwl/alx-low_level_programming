#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0)
 * @dest: pointer a destination string
 * @src: pointer to origin source
 *
 * Return: pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
