#include "main.h"

/**
 * *_strend - move pointer to end of string
 * @s: pointer to string; string to process
 *
 * Return: pointer to string; pointer to last character of string
 * TheOwl
 */

char *_strend(char *s)
{
	/* base case */
	if (*(s + 1) == '\0')
		return (s);
	/* recursive instruction */
	else
		return (_strend(s + 1));
}

/**
 * palindrome_test - test if a string is reverse of another
 * @s: pointer to string; start of string to process
 * @t: pointer to string; end of string to process
 *
 * Return: integer 1 if true or 0 if not
 * TheOwl
 */

int palindrome_test(char *s, char *t)
{
	/* base case */
	if (*s != *t)
		return (0);
	else if (s == t || s + 1 == t)
		return (1);
	/* recursive instruction */
	else
		return (palindrome_test(s + 1, t - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to string; string to process
 *
 * Return: integer; 1 if palindrome or 0 if not
 * TheOwl
 */

int is_palindrome(char *s)
{
	char *t;

	/* exclusion */
	if (*s == '\0' || *(s + 1) == '\0')
		return (1);
	else
	{
		t = _strend(s);
		return (palindrome_test(s, t));
	}
}
