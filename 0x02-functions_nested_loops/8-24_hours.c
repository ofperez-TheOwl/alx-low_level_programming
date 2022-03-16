#include "main.h"

/**
 * jack_bauer - print every minute of a day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	while (i <= '2')/*hours tens digit*/
	{
		while (j <= '9')/*hours ones digit*/
		{
			if (!(i == '2' && j >= '4'))
			{
				while (k <= '5')/*minutes tens digit*/
				{
					while (l <= '9')/*minutes ones digit*/
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
						l = l + 1;
					}
					k = k + 1;
					l = '0';
				}
				j = j + 1;
				k = '0';
			}
			else
			{
				j = '9' + 1;
			}
		}
		i = i + 1;
		j = '0';
	}
}
