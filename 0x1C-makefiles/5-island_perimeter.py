#!/usr/bin/python3
"""Function that returns the perimeter of the island."""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island.

    Args:
        grid (List[List[int]]): A list of lists representing the grid.

    Returns:
        int: The perimeter of the island.

    Constraints:
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100.
    Grid is completely surrounded by water, and there is one island
    (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
    connected to the water around the island).
    """

    if not grid:
        return 0

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
