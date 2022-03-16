#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * followed by a new line
 * Return: no return
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{

		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
