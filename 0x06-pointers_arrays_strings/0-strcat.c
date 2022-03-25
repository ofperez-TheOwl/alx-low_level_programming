#include "main.h"

/**
 * *_strcat - concatenate two string overwriting
 * the final null byte of the first
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
