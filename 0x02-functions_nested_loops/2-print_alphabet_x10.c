#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10) /* number of line to be printed*/
	{
		while (j <= 'z') /* alphabet printing*/
		{
			_putchar(j);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
		j = 'a';
	}
}
