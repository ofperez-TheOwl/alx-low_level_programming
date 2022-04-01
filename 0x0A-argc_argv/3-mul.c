#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * multiply two integers and print result
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: 1 if error
 * TheOwl
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
