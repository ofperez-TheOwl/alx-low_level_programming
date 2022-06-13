#include "main.h"

/**
 * _memset - file first bytes of memory with a constant byte
 * @s: pointer to string; memory set to be manipulate
 * @b: char; constant byte to be writen on memory set
 * @n: unsigned int; number of byte to rewrite
 *
 * Return: pointer to rewriten string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = n;

	if (i > 0)
	{
		int k;

		for (k = 0; k < i; k++)
		{
			s[k] = b;
		}
	}

	return (s);
}
