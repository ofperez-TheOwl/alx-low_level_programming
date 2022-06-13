#include "main.h"

/**
 * _puts - print a string
 * @str: string of character
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
