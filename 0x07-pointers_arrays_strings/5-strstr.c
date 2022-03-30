#include "main.h"
#define NULL 0

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

	if (needle[0] == '\0')
		return (NULL);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])/* find the first matching */
		{
			k = i + 1;
			j = 1;
			while (needle[j] != '\0')/* check total match*/
			{
				if (needle[j] == haystack[k] && needle[j + 1] != '\0')
				{
					j++;
					k++;
				}
				else if (needle[j] == haystack[k] && needle[j + 1] == '\0')
				{
					return (haystack + i);
				}
				else
					break;
			}
		}
		else
			return (NULL); /* no matching */
	}
	return (NULL); /* no matching */
}
