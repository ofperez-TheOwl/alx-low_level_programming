#include <stdio.h>
/**
 * main - entry point
 * print lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i = i - 1;
	}
	putchar('\n');
	return (0);
}
