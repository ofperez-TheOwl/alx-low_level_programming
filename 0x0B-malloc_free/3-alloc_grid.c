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
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* memory for rows*/
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	/* memory for columns */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
