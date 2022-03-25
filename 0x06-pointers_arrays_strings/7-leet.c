#include "main.h"

/**
 * *leet - encode string into 1337 leet
 * @s: pointer to the string
 *
 * Return: pointer to string
 */

char *leet(char *s)
{

	int from[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int to[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; from[i] != '\0'; i++)
		{
			if (s[j] == from[i])
				s[j] = to[i];
		}
	}

	return (s);
}
