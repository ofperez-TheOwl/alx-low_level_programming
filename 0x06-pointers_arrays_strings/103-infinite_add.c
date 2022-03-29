#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: pointer to string
 *
 * Return: length of string
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
 * *infinite_add - add two numbers
 * @n1: pointer to string; first number to add
 * @n2: pointer to string; second number to add
 * @r: pointer to string; result of addition
 * @size_r: integer; size of r
 *
 * Return: pointer to string holding the result or 0 if
 * r cannot hold the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ln1 = _strlen(n1);
	int ln2 = _strlen(n2);
	int i = ln1 - 1, j = ln2 - 1, t = size_r - 1, dec = 0, k;/* counters */

	/* length check */
	if (ln1 > size_r || ln2 > size_r)
		return (0);
	while (t >= 0)
	{
		if (i >= 0 && j >= 0)/* addition when both digit exist*/
		{
			k = (n1[i] - '0') + (n2[j] - '0') + dec;
			r[t] = '0' + (k % 10);/* setting the result to r*/
			dec = k / 10;/* setting the rest */
		}
		if (i >= 0 && j < 0)/* addition when only n1 digits exist*/
		{
			k = (n1[i] - '0') + dec;
			r[t] = '0' + (k % 10);/* setting the result to r*/
			dec = k / 10;/* setting the rest */
		}
		if (i < 0 && j >= 0)/* addition when only n2 digits exist*/
		{
			k = (n2[j] - '0') + dec;
			r[t] = '0' + (k % 10);/* setting the result to r*/
			dec = k / 10;/* setting the rest */
		}
		if (i < 0 && j < 0 && dec != 0)/* if there is no digit*/
		{
			k = dec;
			r[t] = '0' + (k % 10);/* setting the result to r*/
			dec = 0;
		}
		if (i < 0 && j < 0 && dec == 0)/* if there is no digit*/
			return (r + t);
		t--;
		i--;
		j--;
	}
	return (0);
}
