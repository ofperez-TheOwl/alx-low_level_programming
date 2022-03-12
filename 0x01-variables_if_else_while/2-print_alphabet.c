#include <stdio.h>
/**
 * main - Entry point
 * print alphabet lowercase
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';
	
	while (i <= 'z')
	{	
		putchar(i);
		i = i + 1;
	}	
	putchar('\n');
	return (0);
}
