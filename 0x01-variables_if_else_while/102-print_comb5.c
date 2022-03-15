#include <stdio.h>
/**
 * main - entry point
 * print apair of numbers from 00-99 but (00 01, 00 02, 00 03,...)
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = '0'; i <= '9'; i = i + 1)
	{
		for (j = '0'; j <= '9'; j = j + 1)
		{
			for (k = i; k <= '9'; k = k + 1)
			{
				for (l = '0'; l <= '9'; l = l + 1)
				{
					if ((k > i) || (k == i && l > j))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					if (!((i == '9' && j == '8') && (k == '9') && (l == '9')))
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
