#include "main.h"

/**
 * *_strncat - concatenate n bytes to destination string
 * @dest: pointer to firt string
 * @src: pointer to second string
 * @n: integer, number of chars to add
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /* find null terminator */
		i++;

	while (src[j] != '\0' && j < n) /* concatenate */
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
