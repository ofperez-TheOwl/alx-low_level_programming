#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - creates arrays of characters and
 * initiates it with a given character
 * @size: unsigned integer; size of the array
 * @c: character; character for initialization
 *
 * Return: pointer to array if success, NULL if size = 0 or failure
 * TheOwl
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	
	else
	{
		char *str = malloc(size * sizeof(char));
		int i;

		if (str == NULL)
			return (NULL);
		str[size + 1] = '\0';
		for (i = 0; str[i] != '\0'; i++)
		{
			str[i] = '\0' + c;
		}
		return (str);
	}
}
