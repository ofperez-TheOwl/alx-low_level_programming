#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: pointer to a string
 *
 * Return: integer(value of length)
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * *_strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: integer, 0 if egality, négative if s1<s2, positive if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;
	int lens1 = _strlen(s1);
	int lens2 = _strlen(s2);

	if (lens1 >= lens2)
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == s2[i] && k == 0)
				k = 0;
			else if (s1[i] > s2[i])
				k++;
			else if (s1[i] < s2[i])
				k--;
			i++;
		}
	}
	else
	{
		while (s2[i] != '\0')
		{
			if (s1[i] == s2[i] && k == 0)
				k = 0;
			else if (s1[i] > s2[i])
				k++;
			else if (s1[i] < s2[i])
				k--;
			i++;
		}
	}

	return (k);
}
