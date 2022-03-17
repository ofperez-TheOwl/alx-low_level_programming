#include "main.h"

/**
 * times_table - print the 9 times table starting from 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 9)/* lines*/
	{
		while (j <= 9)/* columns*/
		{
			k = i * j;
			if (k == 0 && j == 0)/*first column*/
			{
				_putchar('0');
			}
			else if (k == 0 && i == 0)/*first line*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
			}
			else if	(k > 9)/*double digit*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			else if (k > 0 && k <= 9)/*one digit other than 0*/
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			j = j + 1;
		}
		_putchar('\n');/* next line*/
		j = 0;
		i = i + 1;
	}
}
