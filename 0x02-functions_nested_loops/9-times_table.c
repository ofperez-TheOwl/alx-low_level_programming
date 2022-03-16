#include "main.h"

/**
 * times_table - print the 9 times table starting from 0
 * 
 * Return: nothing
 */

void times_table(void)
{
	int i = '0';
	int j = '0';
	int k;

	while (i <= '9')/* columns*/
	{
		while (j <= '9')/* lines*/
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			j = j + 1;
		}
		_putchar('\n');/* next column*/
		j = '0';
		i = i + 1;
	}
	_putchar('\n');
}
