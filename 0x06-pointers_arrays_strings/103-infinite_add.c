#include "main.h"
#include <stddef.h>

/**
 * _strlen - get the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 * TheOwl
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * add_maker - makes additions
 * @i: int; highest index of n1
 * @j: int; highest index of n2
 * @tt: int; highest index of r
 * @n1: pointer to char; first number
 * @n2: pointer to char; second number
 * @r: pointer to char; result
 *
 * Return: pointer to char; result
 * TheOwl
 */
char *add_maker(int i, int j, int tt, char *n1, char *n2, char *r)
{
	int dec = 0, k; /* carry over and result of addition */

	while (tt >= 0)
	{
		if (i >= 0 && j >= 0) /* addition when both digit exist */
		{
			k = (n1[i] - '0') + (n2[j] - '0') + dec;
			r[tt] = '0' + (k % 10); /* setting the result to r */
			dec = k / 10; /* setting the carry over */
		}
		if (i >= 0 && j < 0) /* addition when only n1 digits exist */
		{
			k = (n1[i] - '0') + dec;
			r[tt] = '0' + (k % 10); /* setting the result to r */
			dec = k / 10; /* setting the carry over */
		}
		if (i < 0 && j >= 0) /* addition when only n2 digits exist */
		{
			k = (n2[j] - '0') + dec;
			r[tt] = '0' + (k % 10); /* setting the result to r */
			dec = k / 10; /* setting the carry over */
		}
		if (i < 0 && j < 0 && dec != 0) /* if there is no digit */
		{
			if (tt == 0)
				return (NULL);
			k = dec;
			r[tt] = '0' + (k % 10); /* setting the result to r */
			dec = 0;
		}
		if (i < 0 && j < 0 && dec == 0) /* if there is no digit */
		{
			r = r + tt;
			break;
		}
		tt--;
		i--;
		j--;
	}
	return (r);
}

/**
 * *infinite_add - add two numbers
 * @n1: pointer to string; first number to add
 * @n2: pointer to string; second number to add
 * @r: pointer to string; result of addition
 * @size_r: integer; size of r
 *
 * Return: pointer to string holding the result or 0 if
 * r cannot hold the result
 * TheOwl
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = _strlen(n1);
	int ln2 = _strlen(n2);

	/* length check */
	if (ln1 > size_r - 1 || ln2 > size_r - 1)
		return (0);
	/* addition */
	r[size_r] = '\0';
	r = add_maker(ln1 - 1, ln2 - 1, size_r - 1, n1, n2, r);
	if (r == NULL)
		return (0);
	while (*r > '9' || *r < '0')
		r++;
	return (r);
}
