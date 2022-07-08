#include "main.h"


/**
 * occurence_cleaner - check occurrence of a char
 * @c: char; char to check for
 * @str: pointer to string; stringto process
 * @n: int; counter
 *
 * Return: int; position of last c or 0 if not found
 * TheOwl
 */
int occurence_cleaner(char *str, char c, int n)
{
	/* base case */
	if (*(str + n) == '\0')
		return (0);
	if (c != *(str + n))
		return (n);
	/* recursive instruction */
	return (occurence_cleaner(str, c, n + 1));
}

/**
 * occurence_check - check occurrence of a char
 * @c: char; char to check for
 * @str: pointer to string; stringto process
 * @n: int; counter
 *
 * Return: int; position of c or 0 if not found
 * TheOwl
 */
int occurence_check(char *str, char c, int n)
{
	/* base case */
	if (*(str + n) == '\0')
		return (0);
	if (c == *(str + n))
		return (n);
	/* recursive instruction */
	return (occurence_check(str, c, n + 1));
}

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
		/* clean multiple occurence of the same char after '*' */
		s2 = s2 + occurence_cleaner(s2, *s2, 1);
		if (*s1 != '\0' && *s2 != '*' && *s2 != '\0')
		{
			n = occurence_check(s1, *s2, n);
			if (n > 0)
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
