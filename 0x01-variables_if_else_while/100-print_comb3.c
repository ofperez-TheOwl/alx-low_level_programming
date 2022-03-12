#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two digit
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	int j = '1';

	putchar(i);
	putchar(j);
	while (i <= '9' && j <= '9')
	{
		if (i == j || i > j)
		{
			i = i + 1;
			j = j + 1;
		}
		putchar(',');
		putchar(' ');
		putchar(i);
		putchar(j);
		i = i + 1;
		j = j + 1;
	}
	putchar('\n');
	return (0);
}
