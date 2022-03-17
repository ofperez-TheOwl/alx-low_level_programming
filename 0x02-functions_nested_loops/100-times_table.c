#include "main.h"
/**
 * print_times_table - print multiplication table up to n
 * @n: integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i = i + 1)/* lines*/
		{
			for (j = 0; j <= n; j = j + 1)/* columns*/
			{
				k = i * j;
				if (k == 0 && j == 0)/*first column*/
					_putchar('0');
				else
				{
					_putchar(',');
					_putchar(' ');
					if (k > 99)/*three digit*/
					{
						_putchar('0' + (k / 100));
						_putchar('0' + ((k % 100) / 10));
						_putchar('0' + (k % 10));
					}
					else if (k > 9 && k < 100)/*double digit*/
					{
						_putchar(' ');
						_putchar('0' + (k / 10));
						_putchar('0' + (k % 10));
					}
					else if (k >= 0 && k <= 9)/*one digit except first column*/
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + k);
					}
				}
			}
			_putchar('\n');/* next line*/
		}
	}
}
