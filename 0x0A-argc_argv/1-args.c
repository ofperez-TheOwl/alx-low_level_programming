#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * prints the number of argument
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: Always success 0
 * TheOwl
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
