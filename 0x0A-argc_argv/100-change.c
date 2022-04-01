#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * find the minimum number of coin to make change
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: 1 if error (unaccepted argument)
 * TheOwl
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2 && atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}
	else
	{
		int i = atoi(argv[1]);
		int j, k;

		j = i / 25;
		k = j * 25;
		j = j + ((i - k) / 10);
		k += ((i - k) / 10) * 10;
		j = j + ((i - k) / 5);
		k += ((i - k) / 5) * 5;
		j = j + ((i - k) / 2);
		k += ((i - k) / 2) * 2;
		j = j + (i - k);
		printf("%d\n", j);
		exit(EXIT_SUCCESS);
	}
}
