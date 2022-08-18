#!/usr/bin/python3
"""5-island_perimeter
program that returns the perimeter of an island
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args:
        grid(list of list) : representation of island
    """
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(gird[i])):
            if (grid[i][j] != 0):
                if (i + 1 < len(grid) and grid[i + 1][j] == 0):
                    perimeter += 1
                if (i != 0 and grid[i - 1][j] == 0):
                    perimeter += 1
                if (j + 1 < len(grid[i]) and grid[i][j + 1] == 0):
                    perimeter += 1
                if (j != 0 and grid[i][j - 1] == 0):
                    perimeter += 1
    return (perimeter)
