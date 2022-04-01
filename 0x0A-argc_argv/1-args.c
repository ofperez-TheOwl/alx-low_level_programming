#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints the number of argument
 * @argc: integer; argument counter
 * @argc: pointer to array of string; argument vector
 *
 * Return: Always success
 * TheOwl
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
