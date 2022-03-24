#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0', i++)
	{
		i++;
		s++;
	}

	return (i);
}

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
	int lend = _strlen(dest);
	int lens = _strlen(src);
	char *ret;
	int i;
	int k = 0;

	ret = dest;
	for (i = lend; i <= lend + lens + 1; i++)
	{
		dest[i] = src[k];
		dest++;
		k++;
	}

	return (ret);
}
