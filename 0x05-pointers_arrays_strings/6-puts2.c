#include "main.h"

/**
 * _strlen - calculate length of string
 * @s: pointer to string
 *
 * Return: length of s
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
 * puts2 - print every other(???) character
 * @str: pointer to a string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int len = _strlen(str) - 1;
	/*printing*/
	while (i <= len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
