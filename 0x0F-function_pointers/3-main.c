#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include "3-calc.h"

/**
 * main - entry point
 * interface with user; main will do the math
 * and print the result
 * @argc: int; argument counter
 * @argv: pointer to array of char; argument vector
 *
 * Return: 0 if success, 98 if incorrect number of arguments
 * 99  if incorret operator; 100 if division by 0
 * TheOwl
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	/* exclusion : valid number of input */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* convert inputs to ints and point to correct operator function */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(n1, n2)); /* calculate and print */

	return (0);
}
