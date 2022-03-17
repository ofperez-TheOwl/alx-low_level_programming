#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: nothing
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}
