#include "main.h"

/**
 * puts2 - print every other(???) character
 * @str: pointer to a string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	/*length of string*/
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	/*printing*/
	i = 0;
	while (i <= len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
