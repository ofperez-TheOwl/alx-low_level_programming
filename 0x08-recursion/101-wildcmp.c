#include "main.h"

/**
 * wild_test - check string after wildcard "*"
 * @s1: pointer to string; first string
 * @s2: pointer to string; second string (after "*")
 * @nextchar: pointer to string; second string after "*"
 *
 * Return: integer; 1 if identical or 0 if not
 * TheOwl
 */
int wild_test(char *s1, char *s2, char *nextchar)
{
	/* base case */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	/* recursive instructions */
	if (*s1 == '\0' && *s2 == '*')
		return (wild_test(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0') /* base case */
		return (0);
	if (*s2 == '*')
		return (wild_test(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (wild_test(s1 + 1, s2 + 1, nextchar));
	else
		return (wild_test(s1 + 1, nextchar, nextchar));
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
	/* base case */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	/* recursive instructions */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (wild_test(s1, s2 + 1, s2 + 1));
	else
		return (0);
}
