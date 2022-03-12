#include <stdio.h>
/**
 * main - Entry point
 * print alphabet lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
