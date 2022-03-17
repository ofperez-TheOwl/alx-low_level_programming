#include <stdio.h>

/**
 * main - entry point
 * print numbers from 1 to 100; Fizz for multiples of 3
 * Buzz for multiples of 5; FizzBuzz for multiples of both
 * 
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i)
		}
		i = i + 1;
	}

	return (0);
}
