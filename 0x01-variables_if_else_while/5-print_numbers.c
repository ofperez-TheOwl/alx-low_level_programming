#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		print("%d ", n);
		n = n + 1;
	}
	return (0);
}
