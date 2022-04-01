#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints every argument of program
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: Always success
 * TheOwl
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	exit(EXIT_SUCCESS);
}
