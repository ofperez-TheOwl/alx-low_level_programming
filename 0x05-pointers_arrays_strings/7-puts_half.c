#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Return: length
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
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n;
	int len = _strlen(str);

	/* find the index to start */
	if (len % 2 != 0)
		n = (len / 2) + 1;
	else
		n = (len / 2);

	while (n < len)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
