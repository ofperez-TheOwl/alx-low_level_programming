#include "main.h"

/**
 * print_chessboard - print a chessboard 8*8
 * @a: pointer to 2D array of char; matrix of integers
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{

	int row;
	int column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
