#include "main.h"

/**
 * print_times_table - print multiplication table up to n
 * @n: integer
 *
 * Return: nothing
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int k;
       
	if (n <= 15 && n >= 0)
	{
		while (i <= n)/* lines*/
		{
			while (j <= n)/* columns*/
			{
				k = i * j;
				if (k == 0 && j == 0)/*first column*/
				{
					_putchar('0');
				}
				else if (k > 99)/*three digit*/
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (k / 100));
					_putchar('0' + ((k % 100) / 10));
					_putchar('0' + (k % 10));
				}
				else if (k > 9 && k < 100)/*double digit*/
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
				else if (k >= 0 && k <= 9)/*one digit except first column*/
				{
					_putchar(',');
					_putchar(' ');
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
}
