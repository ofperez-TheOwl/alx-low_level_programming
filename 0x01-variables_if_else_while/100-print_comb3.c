#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two digit
 * the two digits must be different and
 * if it si the same combination choose the smaller
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
				j = j + 1;
			}
			else
			{
				j = j + 1;
			}
		}
		i = i + 1;
		j = 0;
	}
	putchar('\n');
	return (0);
}
