#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: pointer to string of characters
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
/* length of string*/
	while (*s != '\0')
	{
		i = i + 1;
		s++;
	}
/* printing*/
	while (i >= 0)
	{
		_putchar(*s[i]);
		i = i - 1;
	}
	_putchar('\n');
}
