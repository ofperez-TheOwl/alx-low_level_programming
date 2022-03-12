#include <stdio.h>
/**
 * main - entry point
 * prints combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i = i + 1;	
	}
	putchar('\n');
	return (0);
}
