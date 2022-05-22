#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *word_insert - allocate space and set a word
 * @str: pointer to char; original string
 * @i: int; index where to start reading
 * @l: int; index where to stop reading
 *
 * Return: pointer to char; word or NULL if failure
 * TheOwl
 */
char *word_insert(char *str, int i, int l)
{
	int j = 0;
	char *word;

	word = malloc((l - i + 2) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i <= l)
	{
		*(word + j) = str[i];
		j++;
		i++;
	}
	*(word + j + 1) = '\0';
	printf("word set correctly");
	return (word);
}

/**
 * **word_dispatch - dispatch a string into list of words
 * @str: pointer to char; original string
 * @i: int; index where to start reading
 * @k: int; current number of word finded
 * @word_list: double pointer to char; list of words
 *
 * Return: double pointer to char; list of pointer to the
 * pointers of each word or NULL if failure
 * TheOwl
 */
char **word_dispatch(char *str, int i, int k, char **word_list)
{
	int j;

	/* base case*/
	if (str[i] == '\0')
	{
		/* allocate space for array of pointers that point to each word*/
		word_list = malloc((k + 1) * sizeof(char*));
		if (word_list == NULL)
			return (NULL);
		word_list[k] = NULL;
		return (word_list);
	}
	/* recursive instructions */
	if (str[i] != ' ')
	{
		k++;
		j = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		/* set each word pointer to its place in the array of pointers */
		word_list = word_dispatch(str, i, k, word_list);
		word_list[k - 1] = word_insert(str, j, i - 1);
		return (word_list);
	}
	if (str[i] == ' ') /* if space move index and recall word_dispactch */
	{
		printf("i = %d and is space\n", i);
		word_list = word_dispatch(str, i + 1, k, word_list);
		return (word_list);
	}
	else
		return (word_list);
}

/**
 * **strtow - splits a string into words
 * @str: pointer to char; original string
 *
 * Return: double pointer to char; array of words or NULL if failure
 * TheOwl
 */
char **strtow(char *str)
{
	char **word_list = NULL;
	int i = 0, k = 0;

	if (str == NULL)
		return (NULL);
	word_list = word_dispatch(str, i, k, word_list);
	printf("first word is %s\n", word_list[0]);
	printf("second word is %s\n", word_list[1]);
	printf("third word is %s\n", word_list[2]);
	free(word_list);
	return (word_list);
}
