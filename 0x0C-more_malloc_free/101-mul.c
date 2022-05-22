#include <stdio.h>
#include <stdlib.h>

/**
 * digit_check - checks for non digit symbols
 * @str: pointer to string; number to process
 *
 * Return: 0 if non digit symbols are found and 1 if not
 * TheOwl
 */

int digit_check(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - returns length of string or number of digits
 * @str: pointer to string; number to process
 *
 * Return: unsigned integer; number of digits
 */
unsigned int _strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * digit_mul - multiplies number by a digit
 * @numb: pointer to string; number to multiply
 * @n: character; digit to multiply
 *
 * Return: pointer to string; holds result
 * TheOwl
 */
char *digit_mul(char *numb, char n)
{
}

/**
 * *add_mul - addition of given numbers
 * @numbers: pointer to array of pointers; grid of partial multiplication
 *
 * Return: 
 * TheOwl
 */
char *add_mul(char *numbers[])
{
}

/**
 * _putchar - prints a character
 * @c: character to print
 *
 * Return: Always 1
 * TheOwl
 */
int _putchar(char c)
{
}

/**
 * main - entry point
 * multiplies two positive number
 * @argc: unsigned integer; argument counter
 * @argv: pointer to array of string pointers; argument vector
 *
 * Return: 1 if success, 98 if not
 * TheOwl
 */

int main(unsigned int argc, char *argv[])
{
	unsigned int i = 0;
	char *part_mul[];
	char *num1 = argv[1], *num2 = argv[2];

	/* exclusions */
	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (digit_check(num1) != 1 || digit_check(num2) != 1)
	{
		printf("Error\n");
		exit(98);
	}
	/* partial multiplication by digits of shortest number */
	if (_strlen(num1) > _strlen(num2))
	{
		while (i < _strlen(num2))
		{
			part_mul[i] = digit_mul(num1, num2[i]);
			i++;
		}
	}
	else
	{
		while (i < _strlen(num1))
		{
			part_mul[i] = digit_mul(num1, num2[i]);
			i++;
		}
	}
	/* addition of partial multiplication and printing of result */
	mul = add_mul(part_mul);
	while (*mul != '\0')
	{
		_putchar(*mul);
		mul++;
	}
	_putchar('\0');

	return (1);
}
