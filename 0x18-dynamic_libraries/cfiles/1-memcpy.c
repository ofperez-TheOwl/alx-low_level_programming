#include "main.h"

/**
 * *_memcpy - copy first bytes of a memory area to another
 * @dest: pointer to string; destination area
 * @src: pointer to string; source area
 * @n: unsigned integer; number of memory byte to copy
 *
 * Return: pointer to string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int size = n;

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
