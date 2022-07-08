#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * prints the opcodes of the main function
 * @argc: int; argument counter
 * @argv: double pointer to char; arguments vector
 *
 * Return: int; 0 on success, 1 if wrong number of arguments
 * 2 if opcode is negative
 * TheOwl
 */
int main(int argc, char **argv)
{
	unsigned char *f;
	int i = 0, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	/* casting main to string */
	f = (unsigned char *) main;
	bytes = atoi(argv[1]);
	while (i < bytes)
	{
		printf("%02x", *(f + i));
		if (i != bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
