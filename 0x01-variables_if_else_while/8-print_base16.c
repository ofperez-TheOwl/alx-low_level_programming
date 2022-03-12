#include <stdio.h>
/**
 * main - entry point
 * print the hexadecimal base symbols
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	char j = 'a';

	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}
	while (j <= 'f')
	{
		putchar(j);
		j = j + 1;
	}
	putchar('\n');
	return (0);
}
