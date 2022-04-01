#include "main.h"

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
	if (*s1 != *s2 && *s2 != '*')
		return (0);
	else if (*s1 != *s2 && (*s1 == '\0' || *s2 == '\0') && *s2 != '*')
		return (0);
	else if (*s1 == *s2 && *(s1 + 1) == '\0' && *(s2 + 1) == '\0' && *s2 != '*')
		return (1);
	else if (*(s1 + 1) == '\0' && *s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*(s1 + 1) != '\0' && *s2 == '*' && *(s2 + 1) == '\0')
		return (0);
	else if (*(s1 + 1) == '\0' && *(s1 + 1) != *(s2 + 1)
			&& *s2 == '*' && *(s2 + 1) != '\0')
		return (0);
	else if (*(s1 + 1) == '\0' && *s2 == '*' && *(s2 + 1) == '*')
		return (0);

	/* recursive instructions */
	else if (*(s1 + 1) != '\0' && *s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s1 == *(s2 + 1) && *s2 == '*' && *(s2 + 1) != '\0')
		return (wildcmp(s1, s2 + 1));
	else if (*(s1 + 1) == *(s2 + 1) && *s2 == '*' && *(s2 + 1) != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == *s2 && *(s1 + 1) != '\0' && *(s2 + 1) != '\0' && *s2 != '*')
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
