#include <stdio.h>
/**
 * main - entry point
 * print all combinations of three different digits
 * Return: Always 0
 */

int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7' || j != '8' || k != '9')
					{
						putchar(',');
						putchar(' ');
					}
					k = k + 1;
				}
				else
				{
					k = k + 1;
				}
			}
			k = '0';
			j = j + 1;
		}
		j = '0';
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
