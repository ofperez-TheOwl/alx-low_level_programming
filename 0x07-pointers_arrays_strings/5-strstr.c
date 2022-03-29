#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: pointer to string; string to screen
 * @needle: pointer to string; substring to search for
 *
 * Return: pointer to the located sustring or NULL if none
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			k = i;
			for (j = 1; needle[j] != '\0'; j++) /* find the first correspondance */
			{
				if (haystack[k] == needle[j]) /* check if substring correspond */
				{
					k++;
					j++;
				}
				else
					break; /* no substring matching */
			}
			if (needle[j] == '\0') /* match of substring */
			{
				return (haystack + i);
			}
		}
	}
	return ('\0'); /* no matching */
}
