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
		i++;
		s++;
	}
/* printing*/
	if (i >= 0)
	{
		while (i > 0)
		{
			_putchar(*s);
			s--;
			i--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
