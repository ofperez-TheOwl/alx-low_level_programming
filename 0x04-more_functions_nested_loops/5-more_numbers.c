#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 11)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}
			_putchar('0' + (j % 10));
			j = j + 1;
		}
		j = 0;
		i = i + 1;
		_putchar('\n');
	}
}
