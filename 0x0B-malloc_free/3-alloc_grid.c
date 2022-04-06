#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *alloc_grid - creates a two dimensional array of 0
 * @width: integer; witdth of the grid
 * @height: integer; height of the grid
 *
 * Return: double pointer to the grid if success or
 * NULL if failure or if width or height is = 0
 * TheOwl
 */

int **alloc_grid(int width, int height)
{
	if (width == 0 || height == 0)
		return (NULL);
	else
	{
		int **grid = malloc(width * height * sizeof(int));
		int i =0, j;

		if (grid == NULL)
			return (NULL);
		while (i < height)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
			i++;
		}

		return (grid);
	}
}
