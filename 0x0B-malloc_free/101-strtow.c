#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * number_of_word - find number of words in a string
 * @s: pointer to string; string to process
 *
 * Return: integer; number of words in s
 * TheOwl
 */

int number_of_word(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*s == ' ' && (*(s + 1) != ' ' || *(s + 1) != '\0'))
			i++;
		s++;
	}
	return (i);
}

/**
 * longest_word - find longest word length
 * @s: pointer to string; string to process
 * @plen: integer; previous higher length
 *
 * Return: integer; length of longest word
 * TheOwl
 */

int longest_word(char *s, int plen)
{
	int len = 0;

	/* length of current word */
	if (*s != '\0')
	{
		while (*s == ' ')
			s++;
		while (*s != ' ' || *s != '\0')
		{
			len++;
			s++;
		}
	}

	/* base case */
	if (*s == '\0' && plen > len)
		return (plen);
	if (*s == '\0' && plen <= len)
		return (len);
	/* recursive instructions */
	if (*s != '\0')
	{
		if (plen > longest_word(s, len))
			return (plen);
	}
	return (len);
}

/**
 * **strtow - splits a string into  words
 * @str: pointer to string; string to process
 *
 * Return: pointer to an array of string holding each word
 * or NULL if str == NULL or str == "" or failure
 * TheOwl
 */

char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, now, lenw;

	if (str == NULL)/* exclusion */
		return (NULL);
	/* find number of word in str and length of longest */
	now = number_of_word(str);
	lenw = longest_word(str, 0);
	/* memory for array */
	words = malloc(sizeof(char *) * (now + 1));
	if (words == NULL)
		return (NULL);
	/* memory for each word */
	for (j = 0; j <= now; j++)
	{
		if (j == now)
			words[j] = NULL;
		else
		{
			words[j] = malloc(sizeof(char) * (lenw + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k <= j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
		}
	}
	/* copy words */
	for (j = 0; j < now; j++)
	{
		while (str[i] == ' ')
			i++;
		for (k = 0; str[i + 1] != ' '; k++)
		{
			words[j][k] = str[i + 1];
			i++;
		}
		words[j][k + 1] = '\0';
		i++;
	}
	return (words);
}
