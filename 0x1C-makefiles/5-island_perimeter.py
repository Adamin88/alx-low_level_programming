#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in a grid.

    Args:
    grid (list): A list of list of integers representing the grid.

    Returns:
    int: The perimeter of the island.

    Example:
    >>> island_perimeter([[0, 1, 0, 0],
                          [1, 1, 1, 0],
                          [0, 1, 0, 0],
                          [1, 1, 0, 0]])
    16
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
