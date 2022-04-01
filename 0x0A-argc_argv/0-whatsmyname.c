#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * prints the name of the executable file
 * @argc: integer; argument counter
 * @argv: pointer to array of string; argument vector
 *
 * Return: integer; always 0
 * TheOwl
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}
