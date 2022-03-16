#include "main.h"

/**
 * jack_bauer - printsevery minute of a day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	while (i <= '2')
	{
		while (j <= '9')
		{
			if (i == '2' && j >= '4')
			{
				_putchar('\n');
			}
			else
			{
				while (k <= '5')
				{
					while (l <= '9')
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						-putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
}
