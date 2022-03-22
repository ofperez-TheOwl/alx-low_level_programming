#include "main.h"

/**
 * print_rev - print string in reverse order
 * @*s: pointer to string of characters
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char str[] = *s;
	int i = _strlen(*s);

	while (i >= 0)
	{
		_putchar(str[i]);
		i = i - 1;
	}
	_putchar('\n');
}
