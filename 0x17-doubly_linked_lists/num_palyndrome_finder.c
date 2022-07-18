#include <stdlib.h>
#include <stdio.h>

/**
 * _pow - exponentition function
 * @x: int; first number
 * @y: int; second number
 *
 * Return: int; x raised to the power y in base 10
 * TheOwl
 */
int _pow(int x, int y)
{
	int i, result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}

/**
 * *_strend - move pointer to end of string
 * @s: pointer to string; string to process
 *
 * Return: pointer to string; pointer to last character of string
 * TheOwl
 */

char *_strend(char *s)
{
	/* base case */
	if (*(s + 1) == '\0')
		return (s);
	/* recursive instruction */
	else
		return (_strend(s + 1));
}

/**
 * palindrome_test - test if a string is reverse of another
 * @s: pointer to string; start of string to process
 * @t: pointer to string; end of string to process
 *
 * Return: integer 1 if true or 0 if not
 * TheOwl
 */

int palindrome_test(char *s, char *t)
{
	/* base case */
	if (*s != *t)
		return (0);
	else if (s == t || s + 1 == t)
		return (1);
	/* recursive instruction */
	else
		return (palindrome_test(s + 1, t - 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to string; string to process
 *
 * Return: integer; 1 if palindrome or 0 if not
 * TheOwl
 */

int is_palindrome(char *s)
{
	char *t;

	/* exclusion */
	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	else
	{
		t = _strend(s);
		return (palindrome_test(s, t));
	}
}

/**
 * checker - check if number is palyndrome
 * @number: int; number to check
 * @len: int; number digits of number
 *
 * Return: 1 if palyndrome, 0 if not
 * TheOwl
 */
int checker(int number, int len)
{
	char *num;

	num = malloc(sizeof(char) * len);
	if (num == NULL)
		exit(0);
	snprintf(num, len + 1, "%d", number);
	return (is_palindrome(num));
}

/**
 * main - entry point to my palyndrome number finder
 * @argc: int; argument counter
 * @argv: char pointer; argument vector
 *
 * Return: in; 1 if success -1 if failure 0 if no number find
 * TheOwl
 */
int main(int argc, char **argv)
{
	int len, base, i = 0, j;
	char *n1;

	if (argc != 2)
	{
		printf("Usage: palyn_check number number is the number of digit.\n");
		return (-1);
	}
	/* initiate number */
	len = atoi(argv[1]);
	n1 = malloc(sizeof(char) * (1 + len));
	if (n1 == NULL)
		return (-1);
	
	n1[len] = '\0';
	while (i < len)
	{
		n1[i] = '9';
		i++;
	}
	base = atoi(n1);
	for (i = base; i >= _pow(10, len - 1); i--)
	{
		for (j = base - 1; j >= _pow(10, len - 1); j--)
		{
			if (checker(i * j, 2 * len))
			{
				printf("The largest palyndrome made of two %d-digit number is %d\n", len, i * j);
				return (1);
			}
		}
	}
	return (0);
}
