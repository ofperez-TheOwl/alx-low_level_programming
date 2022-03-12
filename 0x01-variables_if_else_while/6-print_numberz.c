#include <stdio.h>
/**
 * main - entry point
 * print all single digit
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
