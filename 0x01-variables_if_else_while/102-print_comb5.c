#include <stdio.h>
/**
 * main - entry point
 * print apair of numbers from 00-99 but (00 01, 00 02, 00 03,...)
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				while (l <= '9')
				{
					if ((k > i) || ((k == i) && (l <= j)))
					{
						l = l + 1;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!(i == '9' && j == '8' && k == '9' && l == '9'))
						{
							putchar(',');
							putchar(' ');
						}
						l = l + 1;
					}
				}
				l = '0';
				k = k + 1;
			}
			k = 0;
			j = j + 1;
		}
		j = '0';
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
