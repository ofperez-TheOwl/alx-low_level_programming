#include <stdio.h>
/**
 * main - entry point
 * print alphabet in lower and then in upper case
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i = i + 1;
	}

	while (j <= 'Z')
	{
		putchar(j);
		j = j + 1;
	}

	putchar('\n');

	return (0);
}
