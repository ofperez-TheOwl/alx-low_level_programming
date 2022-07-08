#include "main.h"
#include <stdio.h>

/**
 * wild_test - check string after wildcard "*"
 * @s1: pointer to string; first string
 * @s2: pointer to string; second string (after "*")
 * @n: int; indicate if s2 - 1 is "*"
 *
 * Return: integer; 1 if identical or 0 if not
 * TheOwl
 */
int wild_test(char *s1, char *s2, int n)
{
/*	printf("s1 is (%c) s2 is (%c) n is (%d) \n", *s1, *s2, n);*/
	/* base case */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* recursive instructions */
	if (*s1 != '\0' && *s2 == '*')
		return (wild_test(s1, s2 + 1, 1));
	if (n == 1)
	{
		if (*s1 != '\0' && *s2 == '\0')
			return (1);
		if (*s1 == *s2 && *s2 != '*' && *s2 != '\0')
		{
			while (*(s1 + n) != '\0')
			{
				if (*(s1 + n) == *s2)
					break;
				n++;
			}
			if (*(s1 + n) == *s2)
				return (wild_test(s1 + n, s2, 1));
			else
				return (wild_test(s1 + 1, s2 + 1, 0));
		}
		if (*s1 != *s2 && *s1 != '\0' && *s2 != '*' && *s2 != '\0')
		{
			while (*(s1 + n) != '\0')
			{
				if (*(s1 + n) == *s2)
					break;
				n++;
			}
			if (*(s1 + n) == *s2)
				return (wild_test(s1 + n, s2, 1));
			else
				return (wild_test(s1 + 1, s2 + 1, 0));
		}
	}
	if (n == 0)
	{
		if (*s1 != '\0' && *s2 == '\0')
			return (0);
		if (*s1 == '\0' && *s2 != '\0' && *s2 != '*')
			return (0);
		if (*s1 == '\0' && *s2 == '*')
			return (1);
		if (*s1 == *s2 && *s2 != '*' && *s2 != '\0')
			return (wild_test(s1 + 1, s2 + 1, 0));
		if (*s1 != *s2 && *s2 != '*' && *s2 != '\0')
			return (0);
	}
	return (0);
}

/**
 * wildcmp - compare two string taking into account wildcard "*"
 * @s1: pointer to string; first string
 * @s2: pointer to string; second string (can contain "*")
 *
 * Return: integer; 1 if identical or 0 if not
 * TheOwl
 */
int wildcmp(char *s1, char *s2)
{
/*	printf("s1 is (%c) s2 is (%c) n is (%d) \n", *s1, *s2, 0);*/
	/* exclusion */
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* call to wild_test */
	if (*s1 == *s2 && *s2 != '*')
		return (wildcmp(s1 + 1, s2 + 1));
	return (wild_test(s1, s2 + 1, 1));
}
