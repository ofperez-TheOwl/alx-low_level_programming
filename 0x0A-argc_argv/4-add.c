#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * adds two positive numbers
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: 1 if error(argument with not digit symbols)
 * TheOwl
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, j;
	int k = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}
	/* search for not digit symbols */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; (argv[i])[j] != '\0'; j++)
		{
			if ((argv[i])[j] < '0' || (argv[i])[j] > '9')
				k = 1;
		}
		sum += atoi(argv[i]);
	}
	/* return addition */
	if (k == 0)
	{
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
