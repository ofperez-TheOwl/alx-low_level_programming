#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints the name of the executable file
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: integer; always 1
 * TheOwl
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
